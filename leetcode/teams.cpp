#include <iostream>

using namespace std;


int numberOfMatches(int n) {
    int matches = 0;
    while(n != 1) {
        if(n % 2 == 0) {
            // even
            n = n / 2;
            matches += n;
        }
        else {
            // odd
            n = (n - 1) / 2;
            matches += n;
            n++;
        }
    }
    return matches;
}

int main() {
    cout << numberOfMatches(7) << endl;
    return 0;
}