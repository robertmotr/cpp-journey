#include <vector>
#include <string>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string one;
    string two;

    for(int i = 0; i < word1.size(); i++) {
        one += word1[i];
    }
    for(int j = 0; j < word2.size(); j++) {
        two += word2[j];
    }
    if(one == two) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    return 0;
}