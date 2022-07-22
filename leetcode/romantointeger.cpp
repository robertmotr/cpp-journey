#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> numerals = {{'M', 1000}, {'D', 500}, {'C', 100},
         {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int number = 0;
        for(char i: s) {
            number += numerals[i];
        }
        return number;
    }
};

int main() {
    return 0;
}