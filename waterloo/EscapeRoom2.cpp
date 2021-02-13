// second try at escape room, first one barely worked

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool sortf(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
}

bool complowf(const vector<int>& a, int val)  {
    return a[0] < val;
}

bool comphighf(int val, const vector<int>& a) {
    return a[0] > val;
}

vector<vector<int>> vec;

string returnable(int val) {
    vector<vector<int>>::iterator lit = lower_bound(vec.begin(), vec.end(), val, complowf);
    vector<vector<int>>::iterator uit = upper_bound(vec.begin(), vec.end(), val, comphighf);

    int dst1 = distance(vec.begin(), lit);
    int dst2 = distance(vec.begin(), uit);

    if(dst1 == dst2) {
        return "no";
    }
    else {
        for(int i = dst1; i < dst2 - dst1 + dst1; i++) {
            if(vec[i][1] == 1 && vec[i][2] == 1) {
                return "yes";
            }
            else {
                return returnable(vec[i][1] * vec[i][2]);
            }
        }
    }
}

vector<int> splitString(string in) {
    vector<int> tok;
    stringstream check1(in);
    string buf;
    while(getline(check1, buf, ' ')) {
        tok.push_back(stoi(buf));
    }
    return tok;
}

int main() {
    string ln;
    int m;
    int n;

    getline(cin, ln);
    m = stoi(ln);
    getline(cin, ln);
    n = stoi(ln);

    for(int i = 0; i < m; i++) {
        getline(cin, ln);
        vector<int> tokens = splitString(ln);
        for(int k = 0; k < n; k++) {
            vector<int> tmp = {tokens[k], i + 1, k + 1};
            vec.push_back(tmp);
        }
    }
    sort(vec.begin(), vec.end(), sortf);

    string res = returnable(m * n);
    cout << res << endl;
    return 0;
}