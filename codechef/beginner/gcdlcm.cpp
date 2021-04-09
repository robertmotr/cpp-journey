#include <iostream>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int lcm = 1;
        for(int k = 1; k < min(a, b); k++) {
            if(a % k == 0 && b % k == 0) {
                if(k > lcm) {
                    lcm = k;
                }
            }
        }

        


    }

    return 0;
}