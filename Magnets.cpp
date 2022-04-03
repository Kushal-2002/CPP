#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0,c=0,a=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a!=k){
            k=a;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}