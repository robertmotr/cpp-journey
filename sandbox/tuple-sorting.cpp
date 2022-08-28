#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <tuple>

using namespace std;

int main() {

    vector<tuple<int, int, int>> vec;
    vec.emplace_back(2, 4, 5);
    vec.emplace_back(5, 6, 7);
    sort(vec.begin(), vec.end(), greater<>());
    for(auto i : vec) {
        cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << endl;
    }
    return 0;
}