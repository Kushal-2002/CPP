#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, m;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        if (x*2 <= 20)
        {
            x = x - (10 * m);
            if(x>0){

            for (int i = 1; i <= n;i++)
            {
                x = (x / 2) + 10;
            }
            }
        }
        else{

        for (int i = 1; i <= n; i++)
        {
            x = (x / 2) + 10;
        }
        x = x - (10 * m);
        }

        if (x <= 0)
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
