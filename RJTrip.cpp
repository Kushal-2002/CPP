#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,k,c;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        k=a*3+b*2;
        if(k%15!=0)
        c=(k/15)+1;
        else
        c=k/15;
        cout<<c<<endl;
    }
    return 0;
}
