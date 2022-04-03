#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t, n, c2, c3, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // cout<<cnt2(n)<<" "<<cnt3(n)<<endl;

        int c2 = 0;
        int n1=n,n2=n;
        while (n1 % 2 == 0)
        {

            c2++;
            n1 = n1 / 2;
        }
        int c3 = 0;
        while (n2 % 3 == 0)
        {

            c3++;
            n2 = n2 / 3;
        }
        if (n == 1 && c2 <= c3)
        {
            ans = (2 * c3) - c2;
        }
        else
        {
            ans = -1;
        }
        cout << ans << endl;
        return 0;
    }
}