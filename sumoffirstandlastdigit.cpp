#include<iostream>
using namespace std;
int main(){
    int t,n,N;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>N;
        n=N;
        while(n>=10){
            n=n/10;
        }
        cout<<n+(N%10)<<endl;
    }
}