#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> vec(3);
    for(int i = 0; i < t; i++) {
        for(int k = 0; k < 3; k++) {
            cin >> vec[k];
        }
        sort(vec.begin(), vec.end());
        cout << vec[1] << "\n";
    }
    return 0;
}