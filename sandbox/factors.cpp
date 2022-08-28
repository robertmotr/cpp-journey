// program to find factors of a number, return it as array

#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> getFactors(int number);

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

vector<int> getFactors(int number) {
    vector<int> returnable;
    for(int i = 1; i < number + 1; i++) {
        if(number % i == 0) {
            returnable.push_back(i);
        }
    }
    return returnable;
}