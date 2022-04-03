#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int copy=n;
        int c=0,f=0;
        while(n>0){
            k=n%10;
            if(k!=0){
                c++;
            }
            n=n/10;
        }
        cout<<c<<endl;
        while(copy>0){
            k=copy%10;
            int ans=k*(int)(pow(10,f)+.5);
            if(ans!=0)
            cout<<ans<<" ";
            f++;
            copy=copy/10;
        }
        cout<<endl;
    }
    return 0;
}