#include<iostream>
using namespace std;
int main(){
    int n,a,b,ans;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        int k=a%b;
        if(k!=0)
        ans=b-(a%b);
        else{
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}