#include<iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non prime";
            break;
        }

    }
    if(i==n){

    cout<<"Prime"<<endl;
    }
}