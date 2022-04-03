#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        int ans=abs(a-b);
        if(ans%10!=0)
        cout<<(ans/10)+1<<endl;
        else{
            cout<<ans/10<<endl;
        }
    }
    return 0;
}