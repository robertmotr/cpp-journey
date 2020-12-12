#include <vector>

using namespace std;

int simpleArraySum(vector<int> ar) {

    int elements = ar.size();

    int sum = 0;

    for(int i = 0; i < elements; i++) {

        sum = sum + ar[i];

    }

    return sum;

}

int main() {

    return 0;

}