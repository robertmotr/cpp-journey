#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int fc = 1;
        while(a > 1) {
            fc = fc * a;
            a--;
        }
        cout << fc << "\n";
    }
    return 0;
}