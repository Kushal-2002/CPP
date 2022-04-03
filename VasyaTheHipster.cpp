#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int m=max(a,b);
    int l=min(a,b);
    int k=(m-l)/2;
    cout<<l<<" "<<k<<endl;   
    return 0;
}