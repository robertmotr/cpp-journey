#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0) {
       return b;
    }
    if (b == 0) {
       return a;   
    }  
    if (a == b) {
        return a;
    }
    if (a > b) {
        return gcd(a-b, b);
    }
        
    return gcd(a, b-a);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

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
        int gcdn = gcd(a, b);
        int lcmn = lcm(a, b);
        cout << to_string(gcd(a, b)) + " " + to_string(lcmn) << "\n";
    }

    return 0;
}