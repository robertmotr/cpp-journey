#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int sum = 0;
        int a;
        cin >> a;
        while(a != 0) {
            sum = sum + a % 10;
            a = a / 10;
        }
        cout << sum << endl;
    }
}