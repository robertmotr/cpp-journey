#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int a;
        int b;
        int back = 0;
        cin >> a;
        while(a != 0) {
            back *= 10;
            b = a % 10;
            a = a / 10;
            back = back + b;
        }
        cout << back << "\n";
    }
    return 0;
}