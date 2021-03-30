#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> vec(t);
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        vec[i] = a;
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < t; i++) {
        cout << vec[i] << "\n";
    }
    return 0;
}