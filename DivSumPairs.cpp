#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int c = 0, l = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
                sum = arr[i] + arr[j];
            if (i < j)
            {

                if (sum % k == 0)
                {
                    c++;
                }
            }
        }
    }

    cout << c << endl;
    return 0;
}