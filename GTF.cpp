#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a<b){
            a+=c;
        }
        else{
            b+=c;
        }
        if(a<b){
            a+=d;
        }
        else{
            b+=d;
        }
        if(a>=b){
            cout<<"N"<<endl;
        }
        else{
            cout<<"S"<<endl;
        }
    }
}