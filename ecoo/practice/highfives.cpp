#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n % 2 == 0) {
    
        if(n % 3 == 0) {

            if(n % 10 != 2) {
                cout << "not a memer" << endl;
            }
            else {
                cout << "memer" << endl;
            }
        }
        else {
            cout << "memer" << endl;
        }
    }
    else {
        cout << "memer" << endl;
    }
    return 0;
}