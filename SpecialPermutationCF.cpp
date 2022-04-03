#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        int arr[n];
        arr[0]=a;
        int x=n/2;
        arr[x]=b;
        int c=1;
        int copy=n;
        for(int i=1;i<copy;i++){
            if(n==a || n==b){
                n--;
            }
            if(i==copy/2){
                n++;
            }
            if(i!=copy/2){
                
            arr[i]=n;
            }
            n--;
        }
        int m=INT_MAX;
        int m1=0;
        for(int i=0;i<x;i++){
            if(arr[i]<m){
                m=arr[i];
            }
            
             
        }
        for(int i=x;i<copy;i++){
            if(arr[i]>m1){
                m1=arr[i];
            }
        }
        
        // cout<<m<<" "<<m1;
        if(m==a && m1==b){

        for(int i=0;i<copy;i++){
            cout<<arr[i]<<" ";
        }
        }
        else{
            cout<<-1;
        }
        
        cout<<endl;
    }
    return 0;
}