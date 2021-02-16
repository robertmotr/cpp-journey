#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {

    string input1;
    string input2;
    getline(cin, input1);
    string needle = input1;
    getline(cin, input2);
    string haystack = input2;
    bool boolean = true;

    set<string> strset;
    map<char, int> needlemap;
    map<char, int> hsmap;

    string str;

    for(int k = 0; k < needle.size(); k++) {
        needlemap[needle[k]] += 1;
    }

    int i = 0;
    while(i < haystack.size() - needle.size() + 1) {
        
    }
    cout << strset.size() << endl;
    return 0;
}