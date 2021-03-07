#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<string> splitString(string in) {
    vector<string> tokens;
    string add;
    for(int i = 0; i < in.size(); i++) {
        if(in[i] != ' ') {
            add += in[i];
        }
        else {
            tokens.push_back(add);
            add.clear();
        }
    }
    tokens.push_back(add);
    return tokens;
}


int main() {
    string in;
    getline(cin, in);
    int m = stoi(in);

    getline(cin, in);
    int n = stoi(in);

    getline(cin, in);
    int k = stoi(in);

    vector<vector<bool>> canvas;
    for(int l = 0; l < m; l++) {
        vector<bool> vec = {};
        for(int b = 0; b < n; b++) {
            vec.push_back(false);
        }
        canvas.push_back(vec);
    }

    int black = m * n;

    for(int i = 0 ; i < k; i++) {
        getline(cin, in);
        vector<string> toks = splitString(in);
        char rc = toks[0][0];

        int id = stoi(toks[1]);

        if(rc == 'R') {
            
        }
    }

    return 0;
}