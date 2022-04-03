#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string str;
        cin >> str;
        int flag = 0;
        int f=(n%2==0)?(n/2):((n+1)/2);
        if (f <= (k))
        {
            
            flag = 1;
        }
        else
        {

            for (int i = 0; i < k; i++)
            {
                if (str[i] != str[n - i - 1])
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}