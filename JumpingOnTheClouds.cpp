#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    int d=0;
    int i=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(i<n-1){
         i=c+2;
        if(arr[i]==0)
        c=i;
        else if(arr[c+2]==1)
        c=i-1;
        d++;
        
    }
    cout<<d;
}