#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a1,b1,c1,a2,b2,c2,a,b,c;
    cin>>t;
    while(t--){
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        a=a1+a2;
        b=b1+b2;
        c=c1+c2;
        if(a>=b && a>=c){
            cout<<a<<endl;
        }
        else if(b>=a && b>=c){
            cout<<b<<endl;
        }
        else if(c>=a && c>=b){
            cout<<c<<endl;
        }
    }
    return 0;
}