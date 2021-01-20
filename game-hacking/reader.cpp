#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {
    DWORD pid;
    uintptr_t add = 0x0;
    int readable = 0; // buffer to receive contents from

    cout << "Enter a process ID." << endl; // get pid from console
    cin >> pid;
    cout << pid << endl;

    // PARAM 1: 
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if(handle == NULL) {
        cout << "OpenProcess function failed. Displaying GetLastError(): " << GetLastError() << endl;
        system("pause");
    }

    cout << "Enter the address (hex)." << endl;
    cin >> hex >> add;

    BOOL rpmreturn = ReadProcessMemory(handle, LPCVOID(add), &readable, sizeof(int), NULL);
    /*
    USE THE FUNCTION DEFINITION BELOW FOR FUTURE REFERENCE !!!!!!!!!!! 
    PARAM 1: HANDLE (openprocess)
    PARAM 2: LONG POINTER CONSTANT VOID, MS VARIABLE. CAST FROM UINTPTR_T TO THIS
    PARAM 3: BUFFER, ADDRESS OF VARIABLE TO STORE DATA
    PARAM 4: SIZE
    PARAM 5: ???
    */
    if(rpmreturn == FALSE) {
        cout << "RPM failed. Displaying last error: " << GetLastError() << endl;
        system("PAUSE");
    }
    else {
        cout << "RPM succeeded." << endl;
    }

    cout << "Value of int readable: " << dec << readable << endl;
    system("PAUSE");

    return 0;
}