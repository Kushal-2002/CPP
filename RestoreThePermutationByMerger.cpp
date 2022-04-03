#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n * 2];
        int copy[n * 2];
        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < (n * 2); i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < (n * 2); i++)
        {
            copy[i]=arr[i];
        }
        int k = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + k);

        for (int i = 0; i < n * 2; i++)
        {
            for (int j = 0; j < n * 2; j = j + 2)
            {
                if (arr[j] == copy[i])
                {
                    cout << arr[j] << " ";
                    arr[j]=0;
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}