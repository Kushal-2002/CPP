#include <iostream>
using namespace std;
int main(){
    int n,v;
    cin>>v;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==v){
            cout<<i;
            break;
        }
    }
}