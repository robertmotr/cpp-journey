#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        if(a > b) {
            cout << to_string(a) + " " + to_string((a + b)) << "\n"; 
        }
        else {
            cout << to_string(b) + " " + to_string((a + b)) << "\n";
        }
    }
    return 0;
}