#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int N=sizeof(a)/sizeof(a[0]);
    sort(a,a+N);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=;j<n;j++){
            if(abs(a[i]-a[j])<=1){
                c++;
            }
        }
        if(c>max){
            max=c;
        }
    }
    cout<<(max);
}