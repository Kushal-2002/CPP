#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n];
        long long max=0;
        long long min=LONG_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        cout<<max-min<<endl;
    }
    return 0;

}


