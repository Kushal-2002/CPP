#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    double s,ans;
    for(int i=1;i<=n;i++){
        cin>>k;
        s=s+((double)k/100);
    }
    ans=(s*100)/(double)n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}