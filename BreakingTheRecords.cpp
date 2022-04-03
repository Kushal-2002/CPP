#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0, d = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            c++;
        }
         if (arr[i] < min)
        {
            min = arr[i];
            d++;
        }
    }
    cout << c << " " << d;
    return 0;
}
