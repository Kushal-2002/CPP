#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n];
        long long c=0,d=0,s=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s=s+arr[i];
            if(arr[i]==1){
                c++;
            }
            if(arr[i]==0){
                d++;
            }
        }
        long long ans=0;
       
            ans=(long long)(pow(2,(d))+.5)*(c);
        
        cout<<ans<<endl;
    }
    return 0;
}