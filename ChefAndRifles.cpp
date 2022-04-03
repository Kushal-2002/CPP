#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int p = 0;
        int arr[n], arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        while (k--)
        {
            p = 0;
            for (int i = 0; i < n; i++)
            {
                arr1[i] = arr[p];
                arr[i] = arr1[i];
                p = p + 2;
                if (p > n - 1)
                {
                    p = 1;
                }
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << "\n";
    }

return 0;
}