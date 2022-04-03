#include<iostream>
using namespace std;
int main(){
    int t,n,N;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>N;
        int c=0;
        while(N>0){
            n=N%10;
            if(n==4){
                c++;
            }
            N=N/10;
        }
        cout<<c<<endl;
    }
}