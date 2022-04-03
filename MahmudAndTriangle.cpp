#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c=0,z;
    int x=0,y=0;
    for(int i=0;i<n-2;i++){
        x=arr[i];
        y=arr[i+1];
        z=arr[i+2];
        if(x+y>z && y+z>x && x+z>y){
            cout<<"YES"<<endl;
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"NO"<<endl;
    }
    return 0;
}