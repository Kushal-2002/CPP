#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int s=0,flag=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        
        for(int i=0;i<n;i++){
            s=s+arr[i];
            if(s>=x){
                cout<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<-1<<endl;
        }
    }
    return 0;
}