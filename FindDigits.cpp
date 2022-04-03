#include <iostream>
using namespace std;
int main(){
    int t=0,n=0,c=0,d=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int temp=n;
        while(n>0){
            d=n%10;
            if(d!=0 && temp%d==0){
                c++;
            }

            n=n/10;
        }
    cout<<c;
    }
}