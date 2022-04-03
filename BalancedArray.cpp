#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    
    for(int i=1;i<=t;i++){
        cin>>n;
        int x=n/2;
        int s1=0;
        for(int i=2;i<=n;i=i+2){
            s1+=i;
        }
        int k=n-2-1;
        for(int i=1;i<=k;i=i+2){
            s1-=i;
        }
        if(s1%2!=0){
            cout<<"YES"<<endl;
        for(int i=2;i<=n;i=i+2){
            cout<<i<<" ";
        }

        for(int i=1;i<=k;i=i+2){
            cout<<i<<" ";
        }
        cout<<s1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}