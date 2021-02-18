#include <string>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> splitString(string input) {
    vector<int> tokens;
    stringstream check1(input);
    string buf;
    while(getline(check1, buf, ' ')) {
        tokens.push_back(stoi(buf));
    }
    return tokens;
}

int main() {
    string in;
    getline(cin, in);
    int n = stoi(in);

    getline(cin, in);
    vector<int> width = splitString(in);
    getline(cin, in);
    vector<int> height = splitString(in);

    float d = 0;

    for(int i = 0; i < height.size(); i++) {
        float y = (height[i] * (width[i] + width[i + 1])) / (float) 2;
        d += y; 
    }

    cout << d << endl;
    return 0;
}