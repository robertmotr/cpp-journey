#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {

    string str = "A string.";
    string* strptr = &str;

    cout << strptr << endl;

    return 0;
}