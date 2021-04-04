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
        int a, c;
        int b = 0;
        cin >> a;
        c = a;
        while (a != 0)
        {
            b *= 10;
            b += a % 10;
            a = a / 10;
        }
        if (b == c)
        {
            cout << "wins"
                 << "\n";
        }
        else
        {
            cout << "loses"
                 << "\n";
        }
    }
}