#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,x;
    int n,r1,r2,r3,g1,g2,g3,b1,b2,b3;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0;
        cin>>r1>>g1>>b1;
        cin>>r2>>g2>>b2;
        cin>>r3>>g3>>b3;
        if(r1!=n || g2!=n || b3!=n){
            cout<<max((r2+r3+g3),(g1+b1+b2))<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
    return 0;
}