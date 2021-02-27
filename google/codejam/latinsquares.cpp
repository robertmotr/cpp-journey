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
    string in;
    getline(cin, in);
    int cases = stoi(in);

    for(int i = 0; i < cases; i++) {
        getline(cin, in);
        int n = stoi(in);

        vector<set<int>> cols;
        vector<set<int>> rows;

        int rownum = 0;
        int colnum = 0;
        int trace = 0;

        // get matrix input
        vector<vector<int>> vec;
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
        cout << "Case #" << i + ": " + trace + ' ' + rownum + ' ' + colnum << endl;
    }
    return 0;
}