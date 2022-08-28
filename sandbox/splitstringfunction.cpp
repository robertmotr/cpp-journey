#include <sstream>
#include <string>
#include <vector>

using namespace std;

// since i run into the issue of having to split input so often, and there is no
// standardized function in STL to handle this, i've decided to keep this function here
// as a reference for future endeavors

vector<string> splitString(string s, char delim) {
    vector<string> tokens;
    string buf;
    stringstream ss(s);
    while(getline(ss, buf, delim)) {
        tokens.push_back(buf);
    }
    return tokens;
}