#include <vector>
#include <iostream>

using namespace std;

int main() {

    int one;
    int two;

    cin >> one;
    cin >> two;

    int* aptr = &one;
    int* bptr = &two;

    cout << aptr << endl;
    cout << bptr << endl;

    cout << *aptr << endl;
    cout << *bptr << endl;

    return 0;
}