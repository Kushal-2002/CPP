#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
        int d=0;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c;
        int s=a+b+c;
        if(s>=2){
            d++;
        }
    }
        cout<<d<<endl;
}