#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<string> splitString(string in) {
    vector<string> tokens(2);
    tokens[0] = in[0];
    tokens[1] = in.substr(2, string::npos);
    return tokens;
}


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

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

    int gold = 0;

    for(int i = 0 ; i < k; i++) {
        getline(cin, in);
        vector<string> toks = splitString(in);
        char rc = toks[0][0];

        int id = stoi(toks[1]);
        id--;

        if(rc == 'R') {
            // row
            for(int x = 0; x < n; x++) {
                bool now = canvas[id][x];
                canvas[id][x] = !now;
                if(now == false) {
                    gold++;
                }
                else {
                    gold--;
                }
            }
        }
        else {
            // col
            for(int x = 0; x < m; x++) {
                bool now = canvas[x][id];
                canvas[x][id] = !now;
                if(now == false) {
                    gold++;
                }
                else {
                    gold--;
                }
            }
        }
    }
    cout << gold << endl;
    return 0;
}