#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;
        int flag=0,c=0;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        
        
        for(int j=0;j<n;j++){
            if(arr[j]>k){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}