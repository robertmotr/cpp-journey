#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2; i<=sqrt(num); i++){
          if(num % i == 0) return false;
    }
    return true;
}
 
int main() {

    string ln;
    getline(cin, ln);
    vector<int> vec;
    int t = stoi(ln);

    for(int i = 0; i < t; i++) {
        getline(cin, ln);
        vec.push_back(stoi(ln));
    }
    for(int k = 0; k < t; k++) {
        int m = vec[k] * 2;
        for(int counter = m - 2; counter > 2; counter--) {
            if(isPrime(counter)) {
                for(int x = 2; x < counter; x++) {
                    if(isPrime(x) == true && x + counter == m) {
                        cout << to_string(x) + " " + to_string(counter) << endl;
                        break;
                    }
                }
                break;
            }
        }
    }

    return 0;
}