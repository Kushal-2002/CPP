#include <iostream>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        int arr[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]<=0){
                c++;
            }
        }
        if(c>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}