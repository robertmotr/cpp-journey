#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(string input, char delimiter);

int main() {

    string contestants;
    string contestantScores;

    int index = 0;

    getline(cin, contestants);
    contestants = stoi(contestants);

    getline(cin, contestantScores);
    vector<string> splitted = splitString(contestantScores, ' ');

    int size = splitted.size();

    for(int i = 0; i < size - 1; i++) {

        if(stoi(splitted[i + 1]) > stoi(splitted[i])) {

            if(stoi(splitted[i + 1]) != stoi(splitted[index])) {
                index = i + 1;
            }
        }
    }

    cout << index + 1;

    return 0;
}

vector<string> splitString(string input, char delimiter) {
    vector<string> tokens;
    stringstream check1(input);
    string buf;
    while(getline(check1, buf, delimiter)) {
        tokens.push_back(buf);
    }
    return tokens;
}