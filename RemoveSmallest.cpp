#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        int flag=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        
        int k=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k);
        for(int j=1;j<n;j++){
            int ans=abs(arr[j]-arr[j-1]);
            if(ans>1){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
}