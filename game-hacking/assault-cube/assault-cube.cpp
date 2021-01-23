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

DWORD GetProcId(string procname){
    // https://docs.microsoft.com/en-us/windows/win32/api/tlhelp32/nf-tlhelp32-createtoolhelp32snapshot
	DWORD procid;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if(hSnap == INVALID_HANDLE_VALUE) {
		displayError("trying to get snapshot on GetProcId");
	}
	else {
		// https://docs.microsoft.com/en-us/windows/win32/api/tlhelp32/ns-tlhelp32-processentry32
		PROCESSENTRY32 pe32;
		pe32.dwSize = sizeof(pe32); // microsoft wants us to declare size of this struct in dwSize variable
		// using tlh32 snapshot, if this returns true that means a process existed during that snapshot taken earlier
		if(Process32First(hSnap, &pe32) == TRUE) {
			while(Process32Next(hSnap, &pe32)) {
				// convert this crappy ms wchar_t* type to c++ string 
				// use this link: https://docs.microsoft.com/en-us/cpp/text/how-to-convert-between-various-string-types?view=msvc-160
				if(string(wstring(pe32.szExeFile).begin(), wstring(pe32.szExeFile).end()) == procname) {
					procid = pe32.th32ProcessID;
					break;
				}
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
				// convert this crappy ms wchar_t* type to c++ string 
				// use this link: https://docs.microsoft.com/en-us/cpp/text/how-to-convert-between-various-string-types?view=msvc-160
				if(string(wstring(me.szModule).begin(), wstring(me.szModule).end()) == modulename) {
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
	DWORD pid;
	string procname = "ac_client.exe";
	uintptr_t modbase;
	pid = GetProcId(procname);

	HANDLE opHandle = OpenProcess(PROCESS_ALL_ACCESS, NULL, pid);

	




	return 0;
}