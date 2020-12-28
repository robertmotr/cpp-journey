#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {

    string input;
    cin >> input;

    string* inptr = &input;

    cout << inptr << endl;
    return 0;
}