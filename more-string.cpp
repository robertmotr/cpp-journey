#include <string>
#include <iostream>

using namespace std;

int main() {

    string line;

    getline(cin, line);

    string splitone = line.substr(0, line.find("contain"));
    string splittwo = line.substr(line.find("contain") + 7, line.length());

    cout << splitone + "t" << endl;
    cout << splittwo << endl;

    return 0;
}