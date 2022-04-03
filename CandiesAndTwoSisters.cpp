#include<iostream>
using namespace std;
int main(){
    int t,n;
    int a=0,b=0,c=0;
    cin>>t;
    int ans;
    for(int i=1;i<=t;i++){
        cin>>n;
        if(n%2==0){
            ans=n/2-1;
        }
        else{
            ans=(n-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}