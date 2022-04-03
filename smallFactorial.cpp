#include<iostream>
using namespace std;
int main(){
    int t,n,N;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>N;
        int f=1;
        for(int j=1;j<=N;j++){
            f=f*j;
        }
        cout<<f<<endl;
    }
}