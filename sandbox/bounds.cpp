#include <algorithm>
#include <vector>
#include <tuple>
#include <iostream>

using namespace std;

int main() {
    vector<tuple<int, int, int>> vec;
    vec.emplace_back(2, 3, 4);
    vec.emplace_back(5, 9, 10);
    vec.emplace_back(1, 2, 3);
    vec.emplace_back(4, 2, 3);
    vec.emplace_back(2, 8, 9);
    sort(vec.begin(), vec.end());

    // print all tuples
    for(auto i : vec) {
        cout << to_string(get<0>(i)) + ", " + to_string(get<1>(i)) + ", " + to_string(get<2>(i)) << endl;  
    }
    
}