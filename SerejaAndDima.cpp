#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    int s=0,d=0;
    int i=0,j=n-1;
    while(i<=j){
        int m=max(arr[i],arr[j]);
        if(m==arr[i]){
            i++;
        }
        else{
            j--;
        }
        c++;
        if(c%2!=0){
            s+=m;
        }
        else{
            d+=m;
        }
    }
    cout<<s<<" "<<d;
    return 0;
}
