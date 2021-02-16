#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {
    string haystack;
    getline(cin, haystack);
    string needle = haystack;
    getline(cin, haystack);

    set<string> set;
    map<char, int> needlemap;
    map<char, int> haystackmap;
    bool b = true;

    for(int k = 0; k < needle.size(); k++) {
        needlemap[needle[k]] += 1;
    }
    for(int i = 0; i <= haystack.size() - needle.size();) {
        int j = i;
        string ln = "";
        if(b == true) {
            for(int m = i; m < needle.size() + i; m++) {
                ln += haystack[m];
                haystackmap[haystack[m]] += 1;
            }
        }
        if(haystackmap == needlemap) {
            haystackmap.clear();
            i += needle.size();
            set.insert(ln);
            b = true;
        }
        else {
            b = false;
            i += 1;
            if(needlemap[haystack[j]] != 0) {
                haystackmap[haystack[j]] -= 1;
            }
            else {
                haystackmap.erase(haystack[j]);
            }
            haystackmap[i + needle.size()] += 1;
        }
    }

    cout << set.size() << endl;
    return 0;
}