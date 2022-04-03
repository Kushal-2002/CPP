#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int sum=0;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];


    }
    sort(p,p+n);
    for(int i=0;i<m;i++){
        if(p[i]<0)
        sum+=abs(p[i]);
    }
    cout<<sum<<endl;
    return 0;
}