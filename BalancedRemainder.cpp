#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c0 = 0, c1 = 0, c2 = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 3 == 0)
            {
                c0++;
            }
            else if (x % 3 == 1)
            {
                c1++;
            }

            else if (x % 3 == 2)
            {
                c2++;
            }
        }
        while (c0 != c1 || c1 != c2 || c2 != c0)
        {
            if (c0 < c2)
            {
                c2--;
                c0++;
                c++;
            }
            if (c1 < c0)
            {
                c1++;
                c0--;
                c++;
            }
            if (c2 < c1)
            {
                c2++;
                c1--;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}