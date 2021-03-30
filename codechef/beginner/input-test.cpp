#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<long> splitString(string in) {
    vector<long> tokens(2);
    string k;
    for(int i = 0; i < in.size(); i++) {
        if(in[i] != ' ') {
            k += in[i];
        }
        else {
            tokens[0] = stol(k);
            tokens[1] = stol(in.substr(i, string::npos));
            break;
        }
    }
    return tokens;
}

int main() {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int div = 0;

    string in;
    getline(cin, in);

    vector<long> tok = splitString(in);
    long a = tok[0];
    long b = tok[1];

    for(long x = 0; x < a; x++) {
        getline(cin, in);
        long m = stol(in);
        if(m % b == 0) {
            div++;
        }
    }
    cout << div << endl;
    return 0;
}