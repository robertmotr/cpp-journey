#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    bool p;
    int lead;

    int a, b;
    if(a > b) {
        p = false;
    }
    else {
        p = true;
    }
    cin >> a >> b;
    t--;
    lead = abs(a - b);

    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        if(abs(a - b) > lead) {
            lead = abs(a - b);
        }
        if(a > b) {
            p = false;
        }
        else {
            p = true;
        }
    }
    cout << ((int) p + 1) + " " + lead << "\n";
    return 0;
}