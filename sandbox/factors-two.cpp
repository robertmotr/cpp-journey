// program to find factors of a number, return it as array
// made this as a way to test a function in a programming puzzle, then i realized i dont need it

#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<vector<int>> getFactors(int number, int m, int n);

int main() {

    string x;
    cin >> x;
    int y = stoi(x);
    vector<int> values = getFactors(y);
    for(int x = 0; x < values.size(); x++) {
        cout << values[x] << endl;
    }

    return 0;
}

vector<vector<int>> getFactors(int number, int m, int n) {
    
}