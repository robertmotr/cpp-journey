#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if(c > (a + b * 3)) {
        cout << "Who knows..." << endl;
    }
    else {
        int d = a + b;
        while(c > d) {
            d += b;
        }
        cout << d << endl;
    }

    return 0;
}