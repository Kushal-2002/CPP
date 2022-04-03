#include<iostream>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    if(n>=100){
        k=k+(n/100);
        n=n%100;
    }
    if(n>=20 && n<100){
        k=k+(n/20);
        n=n%20;
    }
    if(n>=10 && n<20){
        k=k+(n/10);
        n=n%10;
    }
    if(n>=5 && n<10){
        k=k+(n/5);
        n=n%5;
    }
    if(n>=1 && n<5){
        k+=n;
    }
    cout<<k<<endl;
    return 0;
}