#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long k=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k);
        long long a1=(arr[n-1]-arr[0])*arr[n-2];
        long long a2=(arr[n-2]-arr[0])*arr[n-1];
        if(a1>=a2){
            cout<<a1<<endl;
        }
        else
        cout<<a2<<endl;
    }
    return 0;
}