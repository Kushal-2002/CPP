#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,a,b;
    cin>>x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(i==x){
            break;
        }
    }
    cout<<a<<b;
    return 0;
}