#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        int s1=0;
        long long s=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s1+=i;
            s+=arr[i];
        }
        if(s>=s1 ){
            if(n<2)
            cout<<"YES"<<endl;
            else if(arr[0]!=0 || arr[1]!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}