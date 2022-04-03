#include <iostream>
using namespace std;
int main(){
    int x,y,a,b,k,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>a>>b>>k;
        int X=x;
        int Y=y;
        for(int j=1;j<=k;j++){
            X+=a;
            Y+=b;
        }
        if(X>Y){
            cout<<"DIESEL"<<endl;
        }
        else if(X<Y){
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"SAME PRICE"<<endl;
        }
    }
}