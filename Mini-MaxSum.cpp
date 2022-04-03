#include <bits/stdc++.h>
using namespace std;
int main()
{
    long arr[5];
    long maxsum=0,minsum=0;
    long n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    for(int i=0;i<4;i++){
        maxsum+=arr[5-1-i];
        minsum+=arr[i];
    }
    cout<<minsum<<" "<<maxsum;

    return 0;
}