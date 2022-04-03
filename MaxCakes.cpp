
// C++ Program for Mode using
// Counting Sort technique
#include <bits/stdc++.h>
using namespace std;

void Mode(int a[], int n,int m)
{
    a[n];
    int t = m+1 ;
    int count[t];
    for (int i = 0; i < t; i++)
        count[i] = 0;

    // Store count of each element
    // of input array
    for (int i = 0; i < n; i++)
        count[a[i]]++;

    // mode is the index with maximum count
    int mode = 0;
    int k = count[0];
    for (int i = 1; i < t; i++)
    {
        if (count[i] >= k)
        {
            k = count[i];
            mode = i;
        }
    }

    cout << mode << endl;
}

int main()
{
    int t, n;
    cin >> t;
    long long ans;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int arr[n];
        int max=-1;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if(arr[j]>max){
                max=arr[j];
            }
        }
        int k = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + k);
        Mode(arr, k,max);
    }
}
