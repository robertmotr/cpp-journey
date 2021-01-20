#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {

    int varInt = 123456;
    string varString = "string";
    char arrChar[128] = "Long char array";
    int* intptr = &varInt;
    int** ptr2ptr = &intptr;
    int*** ptr2ptr2 = &ptr2ptr;
    while(true) {
        system("CLS");
        cout << "Process ID: " << dec << GetCurrentProcessId() << endl;
        cout << "varInt address: " << hex << &varInt << endl;
        cout << "varInt value: " << dec << varInt << endl;
        cout << "arrChar address: " << hex << &arrChar << " arrChar value: " << arrChar << endl;
        cout << "intptr address: " << hex << &intptr << " intptr value: " << intptr << endl;
        cout << "ptr2ptr address: " << hex << &ptr2ptr << " ptr2ptr value: " << ptr2ptr << endl;
        cout << "ptr2ptr2 address: " << hex << &ptr2ptr2 << " ptr2ptr2 value: " << ptr2ptr2 << endl;
        cout << "Press SPACE to refresh" << endl;
        getchar();
    }
    return 0;
}