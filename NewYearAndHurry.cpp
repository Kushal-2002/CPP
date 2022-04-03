#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int t=240-k;
    int i=1;
    int s=0;
    for(;i<=n;i++){
        s=s+i*5;
        if(s>t){
            break;
        }
    }
    cout<<i-1<<endl;
    return 0;
}