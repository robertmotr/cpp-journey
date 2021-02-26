#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> splitString(string in) {
    vector<int> tokens;
    for(int i = 0; i < in.size(); i++) {
        if(in[i] == ' ') {
            string k = in.substr(0, i);
            tokens.push_back(stoi(k));
            in.erase(0, i + 1);
        }
    }
    tokens.push_back(stoi(in));
    return tokens;
}

int main() {
    string m;
    getline(cin, m);
    vector<int> tokens = splitString(m);
    cout << tokens.size() << endl;
    return 0;
}