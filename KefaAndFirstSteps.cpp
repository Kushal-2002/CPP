#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int c = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            c++;
            if (c > max)
            {
                max = c;
            }
        }
        else
        {
            c = 0;
        }
    }
    cout<<max+1<<endl;
    return 0;
}