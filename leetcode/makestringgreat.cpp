#include <iostream>
#include <string>

using namespace std;

string makeGood(string s) {
    for(int i = 0; i < s.size() - 1;) {
        char a = s[i];
        char b = s[i + 1];
        if(a == toupper(b) && a != b) {
            s.erase(i, 2);
            i = 0;
        }
        else if(b == toupper(a) && a != b) {
            s.erase(i, 2);
            i = 0;
        }
        else {
            i++;
        }
    }
    return s;
}

int main() {
    string n;
    cin >> n;
    cout << makeGood(n) << endl;
    return 0;
}