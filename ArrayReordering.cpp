#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
    
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k,greater<int>());
        
        int c=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int m=arr[j]*2;
                if(gcd(arr[i],m)>1){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}