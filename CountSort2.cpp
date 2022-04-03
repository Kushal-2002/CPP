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
        ++  a[arr[i]];
    }
    
    for(int i=1;i<=100;i++){
        a[i]+=a[i-1];

    }
    int b[n];
    for(int i=n-1;i>=0;i--){
      b[--a[arr[i]]]  =arr[i];
    }
    int ar[n];
    for(int i=0;i<n;i++){
        ar[i]=b[i];
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}