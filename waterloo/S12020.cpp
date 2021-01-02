#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    string input;
    string lines;
    getline(cin, lines);
    vector<float> speed;

    int intlines = stoi(lines);

    int time[intlines];
    int pos[intlines];

    for(int i = 0; i < intlines; i++) {
        getline(cin, input);
        time[i] = stoi(input.substr(0, input.find(' ')));
        pos[i] = stoi(input.substr(input.find(' '), input.size()));
    }
    for(int k = 0; k < intlines - 1; k++) {
        float y = abs(pos[k + 1] - pos[k]);
        float x = abs(time[k + 1] - time[k]);
        float z = y/x;
        speed.push_back(z);
    }
    
    sort(speed.begin(), speed.end(), greater<float>());

    cout << speed[0] << endl;

    return 0;
}