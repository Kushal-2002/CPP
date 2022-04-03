#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int odd = 1, even = 2;
        int arr[n][k];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {

                if ((i % 2)!=0)
                {
                    arr[i][j] = odd;
                    odd += 2;
                }
                else
                {
                    arr[i][j] = even;
                    even += 2;
                }
            }
        }
        if (k == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << endl;
            }
        }
        else
        {
            if ((odd - 2) > (n * k) || (even - 2) > (n * k))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < k; j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}