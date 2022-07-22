#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    string reversed = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    if(str == reversed) {
        return true;
    }
    return false;
}

int main() {
    return 0;
}