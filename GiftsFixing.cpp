#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>n;
        long long a[n];
        long long b[n];
        long long mina=LONG_MAX;
        long long minb=LONG_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mina){
                mina=a[i];
            }
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<minb){
                minb=b[i];
            }
        }
        long long s=0;
        for(int i=0;i<n;i++){

        long long diff1=a[i]-mina;
        long long diff2=b[i]-minb;
        if(diff1>0 && diff2>0){
            s=s+abs(diff1-diff2)+min(diff1,diff2);
        }
        else if(diff1==0 || diff2==0){
            s=s+(diff1+diff2);
        }
        else if(diff1==0 && diff2==0){
            s=s+0;
        }
        }
        cout<<s<<endl;
        // cout<<mina<<" "<<minb<<endl;

    }
}