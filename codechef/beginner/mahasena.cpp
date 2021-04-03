#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int even = 0;
    int odd;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a % 2 == 0) {
            even++;
        }
    } 
    odd = n - even;
    if(even > odd) {
        cout << "READY FOR BATTLE" << "\n";
    }
    else {
        cout << "NOT READY" << "\n";
    }
    return 0;
}