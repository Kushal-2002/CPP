#include<iostream>
using namespace std;
int main(){
    int n,k;
    int c=0,f=0,a=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        int f=a+k;
        if(f<=5){
            c++;
        }
    }
    cout<<c/3<<endl;
    return 0;
}