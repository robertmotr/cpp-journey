#include <vector>
#include <string>
#include <iostream>

using namespace std;

string interpret(string command) {

    string returnable;
    for(int i = 0; i < command.size();) {
        if(command[i] == 'G') {
            returnable += 'G';
            i++;
        }
        else if(command[i + 1] == ')') {
            returnable += 'o';
            i += 2;
        } 
        else {
            returnable += "al";
            i += 4;
        }
    }
    return returnable;
}

int main() {
    cout << interpret("G()(al)") << endl;
    return 0;
}