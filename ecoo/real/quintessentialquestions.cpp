#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

struct profScore {
    int professorid;
    int score;
};

int main() {

    unordered_map<int, profScore> map;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        profScore p = {a, c};
        if(map[b].professorid == NULL) {
            map[b] = p;
        }
        else {
            if(p.score > map[b].score) {
                map[b] = p;
            }
        }
    }

    for(int i = 1; i < n + 1; i++) {
        if(map[i].professorid == NULL) {
            if(i == n) {
                cout << "-1" << endl;
            }
            else {
                cout << "-1 ";
            }
        }
        else {
            if(i == n) {
                cout << map[i].professorid << endl;
            }
            else {
                cout << to_string(map[i].professorid) + " ";
            }
        }
    }
    return 0;
}