#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    int largestvalue = 0;

    for(int i = 0; i < n; i++) {
        int a, v;
        cin >> a >> v;

        int k = min(a, x);
        if(k * v >= largestvalue) {
            largestvalue = k * v;
        }
    }
    cout << largestvalue << endl;
    return 0;
}