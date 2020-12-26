#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {

        int y;
        int x;

        sort(stones.begin(), stones.end(), greater<int>());

        y = stones[0];
        x = stones[1];

        if(y == x) {
            // both stones are destroyed
            stones.erase(stones.begin(), stones.begin() + 1);
        }
        
        else {
            // stone x is totally destroyed
            // stone y has a new weight of y - x
            stones.erase(stones.begin() + 1);
            stones[0] = y - x;
            

        }

        int size = stones.size();

        if(size > 1) {

            return lastStoneWeight(stones);

        }

        else {

            if(size == 1) {

                return stones[0];
            }
            else {

                return 0;
            }
        }
}
};

