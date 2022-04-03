#include<iostream>
using namespace std;
int main(){
    int t,x,y,p,q,s1,s2;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>p>>q;
        s1=p*10+x;
        s2=q*10+y;
        if(s1<s2){
            cout<<"Chef"<<endl;
        }
        else if(s1==s2){
            cout<<"Draw"<<endl;
        }
        else if(s1>s2){
            cout<<"Chefina"<<endl;
        }
    }
    return 0;
}