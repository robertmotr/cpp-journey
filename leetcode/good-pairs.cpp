#include <vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int goodpairs = 0;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums.size(); j++) {
            if(j > i) {
                if(nums[i] == nums[j]) {
                    goodpairs++;
                }
            }
        }
    }
    return goodpairs;
}

int main() {
    return 0;
}