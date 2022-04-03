#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0,a=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a==1){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}