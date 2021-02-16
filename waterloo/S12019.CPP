#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string ln;
    getline(cin, ln);

    int array[2][2] = {{1, 2}, {3, 4}};

    for(int i = 0; i < ln.size(); i++) {

        if(ln[i] == 'H') {
            int a = array[0][0];
            array[0][0] = array[1][0];
            array[1][0] = a;

            int b = array[0][1];
            array[0][1] = array[1][1];
            array[1][1] = b;
        }
        else {
            int c = array[0][0];
            array[0][0] = array[0][1];
            array[0][1] = c;

            int d = array[1][0];
            array[1][0] = array[1][1];
            array[1][1] = d;
        }
    }

    for(int r = 0; r < 2; r++) {
        for(int c = 0; c < 2; c++) {
            cout << array[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}