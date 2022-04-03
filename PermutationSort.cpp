#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int max=INT_MIN;
        int min=INT_MAX;
        int maxi=0,mini=0;
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max){
                max=arr[i];
                maxi=i;
            }
            if(arr[i]<min){
                min=arr[i];
                mini=i;
            }
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                flag=1;
                break;
            }
        }
        if((mini==0 || maxi==n-1) && flag==1){
            cout<<1<<endl;
        }
        else if(mini==0 && maxi==n-1 && flag==0){
            cout<<0<<endl;
        }
        else if(mini==n-1 && maxi==0){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }
    return 0;
}