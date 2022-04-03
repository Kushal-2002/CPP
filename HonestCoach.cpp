#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];
        int min=INT16_MAX;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int k=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k);
        for(int j=0;j<n-1;j++){
            int x=arr[j+1]-arr[j];
            if(x<min){
                min=x;
            }
        }
        cout<<min<<endl;
    }
}