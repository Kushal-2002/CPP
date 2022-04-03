#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,x;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        long long  s=0;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s+=arr[i];
        }
        x=s%n;
        long long ans=x*(n-x);
        cout<<ans<<endl;
    }
    return 0;
}