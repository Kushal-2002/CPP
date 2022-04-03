#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,w;
    cin>>y>>w;
    int m=max(y,w);
    int ans=6-m+1;
    if(ans==1){
        cout<<"1/6"<<endl;
    }
    else if(ans==2){
        cout<<"1/3"<<endl;
    }
    else if(ans==3){
        cout<<"1/2"<<endl;
    }
    else if(ans==4){
        cout<<"2/3"<<endl;
    }
    else if(ans==5){
        cout<<"5/6"<<endl;
    }
    else if(ans==6){
        cout<<"1/1"<<endl;
    }
   return 0;
}