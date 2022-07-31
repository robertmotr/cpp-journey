#include <iostream>
#include <string>

using namespace std;

class Solution {
public:

    void replaceAll(string& subject, const string& search,
                          const string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }}

    int romanToInt(string s) {
                        int num = 0;

                        replaceAll(s, "IV", "IIII");
                        replaceAll(s, "IX", "VIIII");
                        replaceAll(s, "XL", "XXXX");
                        replaceAll(s, "XC", "LXXXX");
                        replaceAll(s, "CD", "CCCC");
                        replaceAll(s, "CM", "DCCCC");

                        for(const char& ch : s) {
                                if(ch == 'I') {
                                        num += 1;
                                }
                                else if(ch == 'V') {
                                        num += 5;
                                }
                                else if(ch == 'X') {
                                        num += 10;
                                }
                                else if(ch == 'L') {
                                        num += 50;
                                }
                                else if(ch == 'C') {
                                        num += 100;
                                }
                                else if(ch == 'D') {
                                        num += 500;
                                }
                                else {
                                        num += 1000;
                                }
                        }

                        return num;
                }

    };

int main(int argc, char *argv[]) {
	
	return 0;

}
