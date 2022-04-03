#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p,q;
    int c=0;
    for(int i=1;i<=n;i++){
        cin>>p>>q;
        int k=q-p;
        if(k>=2){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}