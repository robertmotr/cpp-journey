#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vec;

bool sortvec(const vector<int>& a, const vector<int>& b) {
    return a[0] > b[0];
}

vector<int> stringSplit(string in, char delimiter) {
    vector<int> tokens;
    stringstream check1(in);
    string buf;
    while(getline(check1, buf, delimiter)) {
        tokens.push_back(stoi(buf));
    }
    return tokens;
}

string recurse(int value) {


}

int main() {

    string input;
    getline(cin, input);
    int m = stoi(input);
    getline(cin, input);
    int n = stoi(input);

    for(int i = 0; i < m; i++) {
        getline(cin, input);
        vector<int> line = stringSplit(input, ' ');
        for(int k = 0; k < n; k++) {
            vec.push_back({line[k], i, k});
            // format: value, row, col
        }
    }
    sort(vec.begin(), vec.end(), sortvec);
    

}