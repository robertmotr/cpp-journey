class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int total = nums.size();
        int duplicates = 0;

        int last = -101;
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end();) {
            if(*it == last) {
                it = nums.erase(it);
                duplicates++;
            }
            else {
                last = *it;
                ++it;
            }
        }
        
        return total - duplicates;
    }
};
