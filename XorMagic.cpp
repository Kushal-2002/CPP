#include <iostream>
using namespace std;
int Xor(int n,int a){
    if(n==0){
        return ((a)*(a))%8;
    }
    int prevXor=Xor(n-1,a);
    return (((a+n)*(a+n))%8)^prevXor;
}
int main(){
    int n;
    cin>>n;
    int a,b;
    int s,k;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
    

        cout<<Xor(b-a,a)<<endl;
    }
    return 0;
}