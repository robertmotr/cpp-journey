#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    string longestCommonPrefix(vector<string> &strs) {

        // find shortest string, call it s
        // iterate for loop over number of characters s has
        // each iteration set prefix to strings if match
        // no match then return prefix

        string smin = *std::min_element(strs.begin(), strs.end(), 
                     [] (const std::string& s1, const std::string& s2) { 
                         return s1.length() < s2.length(); }
                     );

        string prefix = "";

        for(int k = 0; k < smin.size(); k++) {
            // loop over shortest string chars
            for(int i = 0; i < strs.size(); i++) {
                // loop over elements in vector
                if()    
            }
        }
        

    }
};

int main() {

    return 0;
}