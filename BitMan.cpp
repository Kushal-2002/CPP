#include<iostream>
using namespace std;
int getBit(int n,int pos){
    return (n&(1<<pos)!=0);
}
int setBit(int n,int pos){
    return (n|(1<<pos));
}
int clearBit(int n,int pos){
    return (n&(~(1<<pos)));
}
int updateBit(int n,int pos,int value){
    int clear=n&(~(1<<pos));
    return clear|(value<<pos);
}
int main(){
    int n,i,p;
    cin>>n>>i>>p;
    // cout<<getBit(n,i)<<endl;
    // cout<<setBit(n,i)<<endl;
    // cout<<clearBit(n,i)<<endl;
    cout<<updateBit(n,i,p)<<endl;
    return 0;
}