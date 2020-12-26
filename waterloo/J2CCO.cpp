#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<int> splitString(string input, char delimiter);

int main() {

    string contestants;
    string contestantScores;

    int index = 0;

    getline(cin, contestants);
    stoi(contestants);

    getline(cin, contestantScores);

    vector<int> contestantsTokens = splitString(contestantScores, ' ');

    for(int i = 0; i < stoi(contestants) - 1; i++) {
        
        if(contestantsTokens[i + 1] > contestantsTokens[index]) {
            index = i + 1;
        }
    }

    index++;
    cout << index << endl;
    return 0;
}

vector<int> splitString(string input, char delimiter) {
    vector<int> tokens;
    stringstream check1(input);
    string buf;
    while(getline(check1, buf, delimiter)) {
        tokens.push_back(stoi(buf));
    }
    return tokens;
}