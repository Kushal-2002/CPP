#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int k=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+k);
    int ans=(arr[1]-arr[0])+(arr[2]-arr[1]);
    cout<<ans<<endl;
    return 0;
}