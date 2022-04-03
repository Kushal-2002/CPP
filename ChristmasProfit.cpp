#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>x;
        int a[n];
        int b[n];
        int s=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int j=0;j<n;j++){
            s+=b[j]-a[j];
        }
        cout<<s-x<<endl;
    }
}