#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];

    }
    int k=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+k);
    for(int i=0;i<3;i++){
        cout<<arr[3]-arr[i]<<" ";
    }
}