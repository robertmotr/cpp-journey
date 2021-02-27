#include <iostream>
#include <string>
#include <vector>

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

    string m;
    getline(cin, m);
    vector<int> tokens = splitString(m);
    return 0;

}