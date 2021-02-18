#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(string input) {
    vector<string> tokens;
    stringstream check1(input);
    string buf;
    while(getline(check1, buf, ' ')) {
        tokens.push_back(buf);
    }
    return tokens;
}

int main() {

    string ln;
    getline(cin, ln);
    int m = stoi(ln);
    getline(cin, ln);
    int n = stoi(ln);

    getline(cin, ln);
    int k = stoi(ln);

    bool array[m][n];
    for(int a = 0; a < m; a++) {
        for(int b = 0; b < n; b++) {
            array[a][b] = false;
        }
    }
    for(int i = 0; i < k; i++) {
        getline(cin, ln);
        vector<string> tmp = splitString(ln);
        char spot = tmp[0][0];
        int spotnum = stoi(tmp[1]);
        if(spot == 'R') {
            for(int x = 0; x < m; x++) {
                array[spotnum - 1][x] = !array[spotnum - 1][x]; 
            }
        }
        else {
            for(int k = 0; k < n; k++) {
                array[k][spotnum - 1] = !array[k][spotnum - 1];
            }
        }
    }
    int gold = 0;
    for(int a = 0; a < m; a++) {
        for(int l = 0; l < n; l++) {
            if(array[a][l] == true) {
                gold += 1;
            }
        }
    }
    cout << gold << endl;
    return 0;
}