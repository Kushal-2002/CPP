#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,n,c,s,k;
    cin>>t;
    while(t--){
        cin>>n;
        //  n/10 gives the number of 10s that can be taken out
        // number of 1= number of 10s
        s=n;
        c=0;
        while(n>0){
            n=n-10+1;
            c++;
        }
        


        cout<<c+s-1<<endl;
    }
    return 0;
}