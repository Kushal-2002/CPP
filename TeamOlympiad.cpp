#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int s[n], t[n], q[n];
    int a=0 , b=0, c=0;
    int l = 0, z = 0, f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            a++;
        }
        else if (arr[i] == 2)
        {
            b++;
        }
        else if (arr[i] == 3)
        {
            c++;
        }
    }
    int m = min(a, min(b, c));
    cout<<m<<endl;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 1)
        {
            arr[j] = 0;
            s[l] = j+1;
            l++;
        }
        else if (arr[j] == 2)
        {
            arr[j] = 0;
            t[z] = j+1;
            z++;
        }
        else if (arr[j] == 3)
        {
            arr[j] = 0;
            q[f] = j+1;
            f++;
        }
    }
    for(int j=0;j<m;j++){
        cout<<s[j]<<" "<<t[j]<<" "<<q[j]<<" "<<endl;
    }
}