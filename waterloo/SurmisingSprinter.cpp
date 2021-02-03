#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<int> stringSplit(string in, char delimiter) {
    vector<int> tokens;
    stringstream check1(in);
    string buf;
    while(getline(check1, buf, delimiter)) {
        tokens.push_back(stoi(buf));
    }
    return tokens;
}

bool comp(const vector<int>& a, const vector<int>& b) {
    return a[0] > b[0];
}

int main() {
    string in;
    getline(cin, in);
    int n = stoi(in);

    vector<vector<int>> vec;

    for(int i = 0; i < n; i++) {
        getline(cin, in);
        vec.push_back(stringSplit(in, ' '));
    }

    sort(vec.begin(), vec.end(), comp);

    float z = 0.0f;

    for(int k = 1; k < n; k++) {

        int time = abs(vec[k][0] - vec[k - 1][0]);
        int distance = abs(vec[k][1] - vec[k - 1][1]);

        float speed = (float)distance / (float)time;

        if(speed > z) {
            z = speed;
        }
    }

    cout << fixed << setprecision(6) << z << endl;
    return 0;
}