#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];
        int ans=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int j=1;j<n;j++){
            if(arr[j]!=arr[j-1]){

            if(j==1){
                if(arr[j+1]==arr[j]){
                    ans=0;
                }
                else{
                    ans=1;
                }
                
            }
            else if(j==n-1){
                if(arr[j-1]==arr[j-2]){
                    ans=n-1;
                }
                else{
                    ans=n-2;
                }
                
            }
            else{
                ans=j;
            }
            break;
            }
        }
        cout<<ans+1<<endl;
    }
}