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
        int sum = a % 10;
        while(a >= 10) {
            a = a / 10;
        }
        sum += a;
        cout << sum << "\n";
    }
    return 0;
}