#include <bits/stdc++.h>

using namespace std;
int checkInt(double n)
{
    long long k = (long long)n;
    // cout<<n<<" ";
    if (k == n && n != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    long long t, n, a, b, c;
    long long x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        x = (a + c) % (2 * b);
        y = ((2 * b) - c) % a;
        z = ((2 * b) - a) % c;
        // cout<<x<<" "<<y<<" "<<z;
        if (a - b == b - c || (a == b && b == c))
        {
            cout << "YES" << endl;
        }
        else if (x == 0)
        {
            cout << "YES" << endl;
        }
        else if (y == 0 && 2 * b - c > 0)
        {
            cout << "YES" << endl;
        }
        else if (z == 0 && 2 * b - a > 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}