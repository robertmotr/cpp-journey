#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string recursiveFunction(int value);

vector<int> splitString(string input, char delimiter);

vector<tuple<int, int, int>> vec;

int main() {
    string min, nin, in;
    getline(cin, min);
    getline(cin, nin);
    int m = stoi(min);
    int n = stoi(nin);
    for(int rows = 1; rows < m + 1; rows++) {
        getline(cin, in);
        vector<int> split = splitString(in, ' ');
        for(int cols = 1; cols < n + 1; cols++) {
            vec.emplace_back(split[cols], rows, cols);
        }
    }
    sort(vec.begin(), vec.end());
    cout << recursiveFunction(m*n) << endl;
    return 0;
}
vector<int> splitString(string input, char delimiter) {
    vector<int> tokens;
    tokens.push_back(0); // we start at 1 in main() makes it easier
    stringstream check1(input);
    string buf;
    while(getline(check1, buf, delimiter)) {
        tokens.push_back(stoi(buf));
    }
    return tokens;
}
string recursiveFunction(int value) {
    vector<tuple<int, int, int>> cords;
    for(int j = 0; j < vec.size(); j++) {
        tuple<int, int, int> tup = vec[j];
        if(get<0>(tup) == value) {
            cords.push_back(tup);
        }
    }
    if(cords.size() == 0) {
        return "no";
    }
    else {
        for(int k = 0; k < cords.size(); k++) {
            tuple<int, int, int> tupl = cords[k];
            if(get<1>(tupl) == 1 && get<2>(tupl) == 1) {
                return "yes";
            }
            else {
                return recursiveFunction(get<1>(tupl) * get<2>(tupl));
            }  
        }
    }    
}