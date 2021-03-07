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

    vector<string> tok = splitString("R 3");
    for(auto i : tok) {
        cout << i << endl;
    }
    return 0;
}