#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, c2, c3, ans, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        y = n % 2020;
        x = (n - y) / 2020 - y;
        if (x >= 0)
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
