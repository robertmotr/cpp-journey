#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> shuffled;
    bool x = true;

    for(int i = 0; i < n; i++) {
        shuffled.push_back(nums[i]);
        shuffled.push_back(nums[n + i]);
    }
    return shuffled;
}