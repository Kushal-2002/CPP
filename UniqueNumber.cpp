#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int  n;
    while (t--)
    {
        cin >> n;
        int i = 0;
        int ans=0;
        if (n <= 9)
        {
            ans = n;
        }
        else if (n > 45)
        {
            ans = -1;
        }
        else
        {
            vector<int> a;
            if (n > 9 && n <= 17)
            {
                a.insert(a.end(), {9, n - 9});
            }
            else if (n > 17 && n <= 24)
            {
                a.insert(a.end(), {9, 8, n - 17});
            }

            else if (n > 24 && n <= 30)
            {
                a.insert(a.end(), {9, 8, 7, n - 24});
            }

            else if (n > 30 && n <= 35)
            {
                a.insert(a.end(), {9, 8, 7, 6, n - 30});
            }

            else if (n > 35 && n <= 39)
            {
                a.insert(a.end(), {9, 8, 7, 6, 5, n - 35});
            }

            else if (n > 39 && n <= 42)
            {
                a.insert(a.end(), {9, 8, 7, 6, 5, 4, n - 39});
            }

            else if (n > 42 && n <= 44)
            {
                a.insert(a.end(), {9, 8, 7, 6, 5, 4, 3, n - 42});
            }
            else if (n > 44 && n <= 45)
            {
                a.insert(a.end(), {9, 8, 7, 6, 5, 4, 3, 2, n - 44});
            }
            for (i = (a.size()) - 1; i >= 0;  i--)
            {
                ans = a[i]+ans*10;
            }
        }
        cout << ans << endl;
    }
}