#include <iostream>
#include <math.h>

using namespace std;

int compute[12] = {};

int computeMenus(int p, int counter) {
    int x = p - compute[0];
    for(int k = 1; k < 12; k++) {
        int l = p - compute[k];
        if(l >= 0) {
            x = l;
        }
        else {
            break;
        }
    }
    counter++;
    int a = p - x;
    if(a == 0) {
        return counter;
    }
    else {
        return computeMenus(a, counter);
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < 12; i++) {
        compute[i] = pow(2, i);
    }
    for(int i = 0; i < t; i++) {
        int p;
        cin >> p;
        cout << computeMenus(p, 0) << "\n";
    }   
    return 0;
}