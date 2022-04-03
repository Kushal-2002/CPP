#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        if(n<=6){
            n=6;
        }
        if(n%2!=0){
            n++;
        }
        cout<<(n/2)*5<<endl;
        
    }
    return 0;
}