#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char A,B,C,k,a,b;
    for(int i=1;i<=n;i++){
        cin>>A>>B>>C;
        cin>>a>>b;
        if(A==a || A==b){
            cout<<A<<endl;
        }
        else if(B==a || B==b){
            cout<<B<<endl;
        }
        else if(C==a || C==b){
            cout<<C<<endl;
        }
    }
}