#include <iostream>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int notes[6] = {1, 2, 5, 10, 50, 100};

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int counter = 0;
        while (n != 0)
        {
            for (int k = 5; k >= 0; k--)
            {
                if (n - notes[k] >= 0)
                {
                    n -= notes[k];
                    counter++;
                    break;
                }
            }
        }
        cout << counter << "\n";
    }
}