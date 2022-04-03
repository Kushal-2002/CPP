#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int t,b;
    t=(k*w*(w+1))/2;
    if(t>n)
    b=t-n;
    else 
    b=0;
    cout<<b<<endl;
    return 0;
}