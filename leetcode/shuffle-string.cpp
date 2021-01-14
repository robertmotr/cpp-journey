#include <string>
#include <vector>
#include <iostream>

using namespace std;


string restoreString(string s, vector<int>& indices) {
    string ret = s;
    for(int i = 0; i < indices.size(); i++) {
        ret[indices[i]] = s[i];
    }
    return ret;
}

int main() {
    vector<int> vec {4,5,6,7,0,2,1,3};
    cout << restoreString("codeleet", vec) << endl;
    return 0;
}