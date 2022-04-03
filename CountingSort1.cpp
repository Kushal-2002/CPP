#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        cout<<a[i]<<" ";

    }
    return 0;
}