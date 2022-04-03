#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[4];
    int c=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=1;i<4;i++){
        if(arr[i]==arr[i-1])
        c++;
    }
    cout<<c<<endl;
    return 0;

}