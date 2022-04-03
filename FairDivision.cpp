#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int s=0,c=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
            c++;
            s+=arr[i];
        }
        if(s%2==0 && c%2==0){
            if(c==0 && (n-c)%2!=0){
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}