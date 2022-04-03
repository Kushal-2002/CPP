#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,p1,x2,p2;
   int y1,y2;
   long long w1,w2;
    int t;
    cin>>t;
    while(t--){

    cin>>x1>>p1;
    cin>>x2>>p2;
    y1=((int)(pow(10,p1)+.5));
    y2=((int)(pow(10,p2)+.5));
    w1=((long long )y1)*((long long)x1);
    w2=((long long )y2)*((long long)x2);
    if(w1>w2){
        cout<<">"<<endl;
    }
    else if(w1==w2){
        cout<<"="<<endl;
    }
    else{
        cout<<"<"<<endl;
    }
    }
    return 0;
}