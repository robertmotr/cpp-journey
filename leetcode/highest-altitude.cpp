#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int largestAltitude(vector<int>& gain) {
        int result = 0;
        int count = 0;
        
        for (int s : gain) {
            count += s;
            result = max(result, count);
        }
        
        return result;
}


int main() {

    vector<int> in = {-5, 1, 5, 0, 7};
    int y = largestAltitude(in);

    cout << y << " maximum altitude" << endl;
    return 0;
}