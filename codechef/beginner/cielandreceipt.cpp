#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int compute[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int p;
        cin >> p;
        int counter = 0;
        while (p != 0)
        {
            for (int i = 11; i >= 0; i--)
            {
                if (p >= compute[i])
                {
                    p -= compute[i];
                    counter += 1;
                    break;
                }
            }
        }
        cout << counter << "\n";
    }
    return 0;
}