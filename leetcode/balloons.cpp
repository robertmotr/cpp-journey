#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int maxNumberOfBalloons(string text);

int main() {

    string text = "balon";
    cout << maxNumberOfBalloons(text) << endl;
    return 0;
}

int maxNumberOfBalloons(string text) {
    int b; int l; int o; int n; int a;
    for(int i = 0; i < text.size(); i++) {
        if(text[i] == 'b') {
            b++;
        }
        else if(text[i] == 'a') {
            a++;
        }
        else if(text[i] == 'l') {
            l++;
        }
        else if(text[i] == 'o') {
            o++;
        }
        else if(text[i] == 'n') {
            n++;
        }
    }
    o = o / 2;
    l = l / 2;
    int array[] = {a, b, l, o, n};
    sort(array, array + sizeof(array) / sizeof(array[0]));
    return array[0];
}