#include <iostream>
#include "Cycle.h"

using namespace std;

int main() {

    Cycle bike;
    cout << bike.wheels << endl;
    bike.setWheels(4); // its a clown quadcycle now :)
    cout << bike.getWheels() << endl;

    return 0;
}