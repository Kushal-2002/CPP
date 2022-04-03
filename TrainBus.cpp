#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>z;
        if((x+y)>z){
            cout<<"TRAIN"<<endl;
        }
        else if((x+y)<z){
            cout<<"PLANEBUS"<<endl;
        }
        else{
            cout<<"EQUAL"<<endl;
        }
    }
    return 0;
}