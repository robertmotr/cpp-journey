#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream fs;
    fs.open("textfile.txt");

    fs << "Just writing to a file. Nothing to see here.\n";
    fs.close();

    return 0;
}