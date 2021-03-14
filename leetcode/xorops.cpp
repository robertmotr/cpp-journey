#include <vector>

using namespace std;

int xorOperation(int n, int start) {
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        vec[i] = start + 2*i;
    }

    int c = vec[0] ^ vec[1];
    for(int k = 2; k < n; k++) {
        c = c ^ vec[k];
    }

    return c;
}