#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<string> splitString(string in) {
    vector<string> tokens(2);
    string k;
    for(int i = 0; i < in.size(); i++) {
        if(in[i] != ' ') {
            k += in[i];
        }
        else {
            tokens[0] = k;
            tokens[1] = in.substr(i, string::npos);
            break;
        }
    }
    return tokens;
}

int main() {

    string in;
    getline(cin, in);

    vector<string> tok = splitString(in);

    int a = stoi(tok[0]);
    float b = stof(tok[1]);
    float c;
    cout << fixed << showpoint << setprecision(2);

    if(a % 5 == 0) {
        c = b - (float)a - 0.50;
        if(c >= 0) {
            cout << c << endl;
        }
        else {
            cout << b << endl;
        }
    }
    else {
        cout << b << endl;
    }
    return 0;
}