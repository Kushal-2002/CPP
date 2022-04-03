#include<iostream>
using namespace std;
int main(){
    int n,p,q,x,y;
    int flag=0;
    cin>>n;
    int arr[n];
    cin>>p;
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<p;i++){
        cin>>x;
        arr[x-1]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>y;
        arr[y-1]++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Oh, my keyboard!"<<endl;
    }
    else{
        cout<<"I become the guy."<<endl;
    }
    return 0;
}