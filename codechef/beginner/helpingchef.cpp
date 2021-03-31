#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        if(a < 10) {
            cout << "Thanks for helping Chef!" << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
    return 0;
}