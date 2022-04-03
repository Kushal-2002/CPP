#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        int m=max(a,max(b,c));
        int s=(3*m)-a-b-c;
        int ans=n-s;
        if(ans%3==0 && ans>=0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}