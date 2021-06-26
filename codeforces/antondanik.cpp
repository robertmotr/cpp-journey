#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int a = 0; int d = 0;
    string games;

    cin >> n;
    cin >> games;
    for(int i = 0; i < n; i++) {
        if(games[i] == 'A') {
            a++;
        }
        else {
            d++;
        }
    }
    if(a == d) {
        cout << "Friendship" << endl;
    }   
    else {
        if(a > d) {
            cout << "Anton" << endl;
        }
        else {
            cout << "Danik" << endl;
        }
    }
    return 0;
}