#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    long long t=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    t=arr[0]-1;
    for(int i=1;i<m;i++){
        if(arr[i]<arr[i-1]){
            t+=n-arr[i-1]+arr[i];
        }else{
            t=t+arr[i]-arr[i-1];
            // cout<<t<<" ";
        }
    }
    cout<<t<<endl;
    return 0;
}