#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> splitString(string in) {
    vector<int> tokens;
    string add;
    for(int i = 0; i < in.size(); i++) {
        if(in[i] != ' ') {
            add += in[i];
        }
        else {
            tokens.push_back(stoi(add));
            add.clear();
        }
    }
    tokens.push_back(stoi(add));
    return tokens;
}

int main() {
    string in = "";
    getline(cin, in);
    int cases = stoi(in);

    for(int i = 0; i < cases; i++) {
        getline(cin, in);
        int n = stoi(in);
        vector<vector<int>> vec;

        vector<set<int>> cols(n);
        vector<set<int>> rows(n);

        int rownum = 0;
        int colnum = 0;
        int trace = 0;

        // get matrix input
        for(int m = 0; m < n; m++) {
            getline(cin, in);
            vec.push_back(splitString(in));
            // get duplicate rows
            for(int l = 0; l < n; l++) {
                rows[m].insert(vec[m][l]);
            }
            trace += vec[m][m];
        }

        // get duplicate cols
        for(int b = 0; b < n; b++) {
            for(int a = 0; a < n; a++) {
                cols[b].insert(vec[a][b]);
            }
        }

        // determine duplicates
        for(int x = 0; x < n; x++) {
            if(cols[x].size() != n) {
                colnum++;
            }
            if(rows[x].size() != n) {
                rownum++;
            }
        }
        cols.clear();
        rows.clear();
        vec.clear();
        string z = string("Case #") + to_string(i + 1) + ": " + to_string(trace) + ' ' + to_string(rownum) + ' ' + to_string(colnum);
        cout << z << endl;
    }
    return 0;
}