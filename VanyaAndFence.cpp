#include<iostream>
using namespace std;
int main(){
    int n,h,a;
    cin>>n>>h;
    int s=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>h){
            s=s+2;
        }
        else{
            s=s+1;
        }
    }
    cout<<s<<endl;
}