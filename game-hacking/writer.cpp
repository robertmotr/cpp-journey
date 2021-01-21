#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    DWORD pid;
    uintptr_t addy;
    int writable = 50;
    
    cout << "Enter a process ID: " << endl;
    cin >> dec >> pid;
    cout << "You entered " << pid << endl;

    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if(handle == NULL) {
        cout << "OpenProcess failed. Displaying GetLastError(): " << GetLastError() << endl;
        system("pause");
    }

    cout << "Enter the address (hex)." << endl;
    cin >> hex >> addy;

    cout << "You entered " << addy << endl;

    BOOL wpmreturn = WriteProcessMemory(handle, LPVOID(addy), &writable, sizeof(int), NULL);
    /*
    USE THE FUNCTION DEFINITION BELOW FOR FUTURE REFERENCE !!!!!!!!!!! 
    PARAM 1: HANDLE (openprocess)
    PARAM 2: LONG POINTER VOID, MS VARIABLE. CAST FROM UINTPTR_T TO THIS
    PARAM 3: BUFFER, ADDRESS OF VARIABLE TO STORE DATA
    PARAM 4: SIZE
    PARAM 5: ???
    */
    if(wpmreturn == FALSE) {
        cout << "WPM failed. Displaying last error: " << GetLastError() << endl;
        system("PAUSE");
    }
    else {
        cout << "WPM succeeded." << endl;
        system("PAUSE");
    }
    return 0;
}