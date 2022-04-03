#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        double x=(double)n/3.0;
        
        long long k=round(x);
        
        cout<<n-(k*2)<<" "<<k<<endl;

    }
    return 0;
}