#include<iostream>
using namespace std;
int main(){
    int t;
    int n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int s=0;
        while(n!=0){
            n=n/5;
            s=s+n;
        }
        cout<<s<<endl;
    }
    return 0;
}