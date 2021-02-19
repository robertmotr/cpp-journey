#include <iostream>
#include <vector>

using namespace std;

int main() {
    string ln;
    getline(cin, ln);
    int n = stoi(ln);
    vector<int> vec;
    int total = 0;
    for(int i = 0; i < n; i++) {
        getline(cin, ln);
        int k = stoi(ln);
        if(k == 0) {
            vec.pop_back();
        }
        else {
            vec.push_back(k);
        }
    }
    for(int m = 0; m < vec.size(); m++) {
        total += vec[m];
    }
    cout << total << endl;
    return 0;
}