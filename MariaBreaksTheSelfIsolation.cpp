#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,ans     ;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
         int flag=0;
        int c=n+1;
        int max=0,maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=n-1;i>=0;i--){
            if(arr[i]<=(i+1)){
                cout<<i+2<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<1<<endl;
    }

    return 0;
}