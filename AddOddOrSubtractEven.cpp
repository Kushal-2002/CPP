#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int x=abs(a-b);
        if((b>a && x%2!=0) || (b<a && x%2==0)){
            cout<<1<<endl;
        }
        else if((b<a && x%2!=0) || (b>a && x%2==0)){
            cout<<2<<endl;
        }
        else if(x==0){
            cout<<0<<endl;
        }
    }
}