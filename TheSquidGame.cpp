#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        int flag=0,s=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            s=s+arr[j];
        }
        
        int k=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k);
        cout<<s-arr[0]<<endl;
    }
    return 0;
}