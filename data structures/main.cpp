#include "mystructure.h"
#include <iostream>

using namespace std;

int main() {

    // testing my hand at structures

    mystructure strct;

    cout << strct.x << endl;
    strct.setX(93);
    cout << strct.returnX() << endl;

    return 0;
}