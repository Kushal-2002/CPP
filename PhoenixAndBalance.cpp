#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int p=0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = (int)(pow(2, i + 1) + .5);
           
        }
        int s = 0;
        int f=n-1-(n/2);
        for(int i=f;i<n-1;i++){
            s+=arr[i];
        }
        for(int i=0;i<f;i++){
            p+=arr[i];
        }
        p+=arr[n-1];
        cout <<p-s << endl;
    }
    return 0;
}