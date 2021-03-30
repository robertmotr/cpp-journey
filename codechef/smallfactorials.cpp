#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int fact = 1;
        while(a != 1) {
            fact = fact * a;
            a--;
        }
        cout << fact << "\n";
    }
    return 0;
}