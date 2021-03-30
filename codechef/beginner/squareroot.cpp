#include <iostream>
#include <math.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        cout << (int) sqrt(a) << "\n";
    }
    return 0;
}