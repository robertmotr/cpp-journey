#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, q;
    cin >> n >> c >> q;

    int cookies = n * c;
    vector<int> cookiejars(n, c);

    for(int i = 0; i < q; i++) {
        int r;
        cin >> r;

        for(int k = 0; k < n; k++) {
            if((k + 1) % r == 0) {
                if(cookiejars[k] > 0) {
                    cookies--;
                    cookiejars[k] -= 1;
                }
            }
        }
    }
    cout << cookies << endl;
    return 0;
}