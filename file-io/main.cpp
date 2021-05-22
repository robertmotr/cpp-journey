#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream fs;
    fs.open("textfile.txt");
    string line;
    getline(fs, line);
    cout << line << endl;
    fs.close();

    return 0;
}