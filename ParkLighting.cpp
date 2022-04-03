#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,ans;
    cin>>t;
    while(t--){
        cin>>n>>m;
        double f=((double)(n*m))/2.0;
        ans=ceil(f);
        cout<<ans<<endl;
    }
   return 0;
}