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
        int fourcnt = 0;
        int b;
        while(a != 0) {
            b = a % 10;
            if(b == 4) {
                fourcnt++;
            }
            a = a / 10;
        }
        cout << fourcnt << "\n";
    }
    return 0;
}