#include <iostream>
#include <vector>
#include <Windows.h>
#include <tlhelp32.h>
#include <string>
#include <wchar.h>

using namespace std;

// Error occured while (stuff here):\n GetLastError()
void displayError(string typefailure) {
	cout << "Error occurred while " + typefailure + ":\n"<< GetLastError() << endl;
	system("PAUSE");
}

DWORD GetProcId(char* procname){
    // https://docs.microsoft.com/en-us/windows/win32/api/tlhelp32/nf-tlhelp32-createtoolhelp32snapshot
	DWORD procid;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if(hSnap == NULL) {
		displayError("trying to get snapshot on GetProcId");
	}
	else {
		// https://docs.microsoft.com/en-us/windows/win32/api/tlhelp32/ns-tlhelp32-processentry32
		PROCESSENTRY32 pe32;
		pe32.dwSize = sizeof(pe32); // microsoft wants us to declare size of this struct in dwSize variable
		// using tlh32 snapshot, if this returns true that means a process existed during that snapshot taken earlier
		do {
			if(strcmp(procname, (char*)pe32.szExeFile) == 0) {
				procid = pe32.th32ProcessID;
				break;
			}
		}
		while (Process32Next(hSnap, &pe32));
	}
	CloseHandle(hSnap);
	return procid;
}

uintptr_t GetModuleBaseAddress(DWORD procid, char* modName)
{
	uintptr_t modbaseaddr;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procid);
	if(hSnap == NULL) {
		displayError("trying to get snapshot on GetModBaseAddr");
	}
	else {
		MODULEENTRY32 me;
		me.dwSize = sizeof(MODULEENTRY32);
		if(Module32First(hSnap, &me)) {
			do {
				if(strcmp((char*)me.szModule, modName) == 0) {
					modbaseaddr = (uintptr_t) me.modBaseAddr;
					break;
				}
			}
			while (Module32Next(hSnap, &me));
		}
	}
	CloseHandle(hSnap);
	return modbaseaddr;
}

// openprocess handle, baseptr, offsets
uintptr_t findAddress(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets){
	
	uintptr_t addr = ptr;
	for (unsigned int i = 0; i < offsets.size(); ++i)
	{
		ReadProcessMemory(hProc, (BYTE*)addr, &addr, sizeof(addr), 0);
		addr += offsets[i];
	}
	return addr;
}

int main() {

	int ammo = 500;

	DWORD pid = GetProcId("ac_client.exe");
	HANDLE opHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

	if(opHandle == NULL) {
		displayError("trying to get OpenProcess handle");
	}
	else {

		vector<unsigned int> offsets = {0x150};

		uintptr_t baseaddr = GetModuleBaseAddress(pid, "ac_client.exe");

		baseaddr = baseaddr + 0x10f4f4;

		uintptr_t ammoaddress = findAddress(opHandle, baseaddr, offsets);

		BOOL wpmreturn = WriteProcessMemory(opHandle, (LPVOID)ammoaddress, &ammo, sizeof(ammo), NULL);
		if(wpmreturn == FALSE) {
			displayError("to WPM onto ammo address");
		}
		else {
			cout << "Successfully overwritten ammo address." << endl;
			system("PAUSE");
		}
	}

	return 0;
}