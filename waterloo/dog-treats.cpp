#include <string>
#include <iostream>

using namespace std;

int main() {

    int small;
    int medium;
    int large;

    int score;

    cin >> small;
    cin >> medium;
    cin >> large;

    score = 1 * small + 2 * medium + 3 * large;

    if(score >= 10) {
        cout << "happy";
    }
    else {
        cout << "sad";
    }
    return 0;
}