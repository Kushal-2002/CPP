#include<iostream>
using namespace std;
int main(){
    int t,n,s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int sum=0;
        while(n>0){
            s=n%10;
            sum=sum+s;
            n=n/10;
        }
        cout<<sum<<endl;
    }
}