#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=0,s=0,max=-1;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        s=s-a+b;
        if(s>max){
            max=s;
        }
    }
    cout<<max<<endl;
}