#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int c=0,d=0;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(a>b){
            c++;
        }
        else if(b>a){
            d++;
        }
    }
    if(c>d){
        cout<<"Mishka";
    }
    else if(d>c){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}