
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        int f=(n+1)/2;
        int k=abs(f-x);
        int z=abs(f-y);
        
        int ans;
         if((k%2==0 && z%2==0 ) || (k%2!=0 && z%2!=0 ) || (k==z)){
            cout<<0<<endl;
        }
        else{
         
        cout<<1<<endl;
        }
  
    }
    return 0;
}