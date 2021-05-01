#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    string out = "";
    cin >> in;

    for(int i = 0; i < in.size() - 1;) {
        if(in[i] == 'C' || in[i] == 'T' || in[i] == 'G') {
            if(in[i + 1] == 'A') {
                string c;
                c.push_back(in[i]);
                c.push_back(in[i + 1]);
                out.append(c);
                i++;
            }
            else {
                string c;
                c.push_back(in[i]);
                c.push_back(" ");
                out.push_back(c);
                i++;
            }
        }
        else if(in[i] == 'A') {
            if(in[i + 1] == 'C' || in[i + 1] == 'T' || in[i + 1] == 'G') {
                out.append(in[i] + in[i + 1]);
                i++;
            }
            else {
                out.append(in[i] + " ");
                i++;
            }
        }
    }

    cout << out << endl;
    return 0;
}