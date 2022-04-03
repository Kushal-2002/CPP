#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int arr[t];
    for(int i=1;i<=t;i++){
        cin>>arr[i];
    }
    for(int i=t;i>=1;i--){
        cout<<arr[i]<<" ";
    }
}