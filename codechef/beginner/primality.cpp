#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int a, b, c = 0;
        cin >> a;
        b = a / 2;
        for(int k = 2; k <= b; k++) {
            if(a % k == 0) {
                c = 1;
                break;
            }
        }
        if(c == 0) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }
    return 0;
}