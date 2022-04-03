#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,k,l,ans;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        k=min(a,b);
        l=max(a,b);
        if(k*2>l){
            cout<<k*k*4<<endl;
        }
        else{
            cout<<l*l<<endl;
        }
    }
    return 0;
}