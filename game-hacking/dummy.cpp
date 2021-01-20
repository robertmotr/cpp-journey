#include <string>
#include <Windows.h>
#include <iostream>

// following a tutorial on forum thread unknowncheats.me as an introduction to game hacking/reverse engineering
// hopefully this will build up my knowledge of how things work at a lower-level

using namespace std;

int main() {

    int varInt = 123456;
    string varString = "string";
    char arrChar[128] = "Long char array";
    int* intptr = &varInt;
    int** ptr2ptr = &intptr;
    int*** ptr2ptr2 = &ptr2ptr;

    cout << "Process ID: " << GetCurrentProcessId() << endl;
    return 0;
}