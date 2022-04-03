#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(;;){
            if(arr[0]<arr[n-1]);
            {
                arr[0]++;
                arr[n-1]--;
                if(arr[0]>arr[n-1]){
                    break;
                }
            }
            if(arr[0]>=arr[n-1]){
                break;
            }
            int k=sizeof(arr)/sizeof(arr[0]);
            sort(arr,arr+k);
        }
        cout<<abs(arr[0]-arr[n-1])<<endl;
    }
    return 0;
}