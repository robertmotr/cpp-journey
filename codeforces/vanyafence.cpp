#include <iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, w, t;
    cin >> n >> h;
    w = n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        if(t > h) {
            w++;
        }
    }

    cout << w << endl;

    return 0;
}