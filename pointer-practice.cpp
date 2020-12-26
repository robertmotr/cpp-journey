#include <iostream>

using namespace std;

int main() {

    // Reference var (&)
    string food = "Apple";
    string &reference = food;

    string* pointer_to_food = &food;

    cout << reference << endl; // prints reference to food

    cout << &food << endl; // prints hex address in memory

    cout << pointer_to_food << endl; // prints pointer to hex address

    cout << *pointer_to_food << endl; // dereference, output value of food instead of hex address

    return 0;
}