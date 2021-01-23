#include <iostream>
#include <vector>
#include <Windows.h>
#include <tlhelp32.h>
#include <string>

using namespace std;

// Error occured while (stuff here):\n GetLastError()
void displayError(string typefailure) {
	cout << "Error occurred while " + typefailure + ":\n"<< GetLastError() << endl;
	system("PAUSE");
}

DWORD GetProcId(const wchar_t* procname){
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
		if(Process32First(hSnap, &pe32)) {
			while(Process32Next(hSnap, &pe32)) {
				// TODO
			}
		}
	}
	CloseHandle(hSnap);
	return procid;
}

uintptr_t GetModuleBaseAddress(DWORD procId, string modulename){
	uintptr_t modBaseAddr;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
	if(hSnap == INVALID_HANDLE_VALUE) {
		displayError("trying to get snapshot for GetModuleBaseAddress");
	}
	else {
		MODULEENTRY32 me;
		me.dwSize = sizeof(me);
		if(Module32First(hSnap, &me)) {
			while(Module32Next(hSnap, &me)) {
				// TODO
				if(str == modulename) {
					modBaseAddr = (uintptr_t)me.modBaseAddr; // me.modBaseAddr returns BYTE pointer, cast to unsigned int pointer
				}
			}
		}
	}
	CloseHandle(hSnap);
	return modBaseAddr;
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

	int ammo;

	cout << "Enter an ammo value:" << endl; 
	cin >> ammo;
	DWORD pid;
	string procname = "ac_client.exe";
	uintptr_t modbase;
	pid = GetProcId(procname);

	HANDLE opHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	if(opHandle == NULL) {
		displayError("trying to get OpenProcess handle");
	}
	else {
		vector<unsigned int> offsets = {150};
		uintptr_t base = GetModuleBaseAddress(pid, "ac_client.exe");
		uintptr_t finaladd = findAddress(opHandle, base, offsets);
		
		BOOL wpmreturn = WriteProcessMemory(opHandle, (LPVOID)finaladd, &ammo, sizeof(int), NULL); 
		if(wpmreturn == TRUE) {
			cout << "Changed ammo value." << endl;
		}
		else {
			displayError("trying to WPM to ammo.");
		}
	}

	return 0;
}