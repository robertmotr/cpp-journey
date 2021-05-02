#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    getline(cin, in);

    for(int i = 0; i < in.size() - 1;) {
        if(in[i] == 'A') {
            if(in[i + 1] == 'C' || in[i + 1] == 'T' || in[i + 1] == 'G') {
                i++;
            }
            else {
                in.insert(i + 1, 1, ' ');
                i += 2;
            }
        }
        else if(in[i] == 'C' || in[i] == 'T' || in[i] == 'G') {
            if(in[i + 1] == 'A') {
                i++;
            }
            else {
                in.insert(i + 1, 1, ' ');
                i += 2;
            }
        }
    }

    cout << in << endl;
    return 0;
}