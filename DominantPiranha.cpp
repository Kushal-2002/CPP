#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int c=0;
        int max=0,maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                maxi=i;
                
            }
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                c++;
            }
        }
        int ans;
        for(int i=0;i<n;i++){
            if(arr[i]==max){
                ans=i;
                break;
            }
        }
        if(c==0){
            cout<<-1<<endl;
        }
        else
        cout<<ans+1<<endl;
    }

    return 0;
}