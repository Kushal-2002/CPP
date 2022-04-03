#include <iostream>
using namespace std;
int main(){
    int t;
    int n,k,d,a,l;
    cin>>t;
    for(int i=1;i<=t;i++){
        int s=0;
        cin>>n>>k>>d;
        for(int j=1;j<=n;j++){
            cin>>a;
            s=s+a;
        }
        l=s/k;
        if(l>d){
            cout<<d<<endl;
        }
        else{
            cout<<l<<endl;
        }
    }
}