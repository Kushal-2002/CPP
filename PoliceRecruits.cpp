#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a;
    int s=0,c=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a==-1 && s==0){
            c++;
        }
        if(a>0){
            s=s+a;
        }
        if(a==-1 && s!=0){
            s=s+a;
        }
    }
    cout<<c;
    return 0;
}