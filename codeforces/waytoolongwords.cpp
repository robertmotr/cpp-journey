#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if(a.size() > 10) {
            string out = a[0] + to_string((a.size() - 2)) + a[a.size() - 1];
            cout << out << endl;
        }
        else {
            cout << a << endl;
        }
    }

    return 0;
}