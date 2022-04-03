#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                c++;
            }
        }
        if(c>0)
        cout<<n-(c-1)<<endl;
        else
        cout<<n-c<<endl;

    }
    return 0;
}