#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int arr[5];
    int max=0,maxn=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        arr[a[i]]++;
    }
    for(int j=0;j<5;j++){
        if(arr[j+1]>max){
            max=arr[j+1];
            maxn=j+1;
        }
    }
    cout<<maxn;
}