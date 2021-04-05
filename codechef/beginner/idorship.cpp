#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        char k;
        cin >> k;
        if(k == 'B' || k == 'b') {
            cout << "BattleShip" << "\n";
        }
        else if(k == 'C' || k == 'c') {
            cout << "Cruiser" << "\n";
        }
        else if(k == 'D' || k == 'd') {
            cout << "Destroyer" << "\n";
        }
        else {
            cout << "Frigate" << "\n";
        }

    }
    return 0;
}