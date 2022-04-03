#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    long long t,n,ans;
    long long x;
    cin>>t;
    while(t--){
        cin>>n;
        x=n/2;
        ans=(8*x*(x+1)*((2*x)+1))/6;
        cout<<ans<<endl;
    }
    return 0;
}