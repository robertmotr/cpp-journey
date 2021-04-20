#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++) {
        map[nums[i]] += 1;
    }
    for(int i = 0; i < nums.size(); i++) {
        if(map[nums[i]] == 1) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    
    vector<int> vec;

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int k;
        cin >> k;
        vec.push_back(k);
    }

    cout << singleNumber(vec) << endl;
}