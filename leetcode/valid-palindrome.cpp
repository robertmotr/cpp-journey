class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); ) {
            if (!isalnum(s[i])) {
                s.erase(i, 1);
            } else {
                i++; 
            }
        }

        std::transform(s.begin(), s.end(), s.begin(),
            [](unsigned char c) { return std::tolower(c); }
        );

        int left = 0;
        int right = s.length() - 1;
        while (left < right) { 
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
