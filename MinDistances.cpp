#include <iostream>
using namespace std;
int main(){
    int n,f,d;
    cin>>n;
    int a[n];
    int min=0,c=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        f=a[i];
        for(int j=i+1;j<n;j++){
            if(f==a[j]){
                d=(j-i);
                c++;
                // cout<<a[i]<<"  ";
            }
        }
            if(d<min){
                min=d;
            }
    }
    if(c>0){

    cout<<d;
    }
    else{
        cout<<-1;
    }
}