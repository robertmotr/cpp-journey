#include <iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n > 7) {
        cout << "Tootsie Roll!" << endl;
    }
    else if(n < 3) {
        cout << "Rocket!" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}