#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t,n,m,a;
    double p,q;
    
        cin>>n>>m>>a;
        p=(double)n/(double)a;
        q=(double)m/(double)a;
        p=ceil(p);
        q=ceil(q);
        cout<<(long long)(p*q)<<endl;

    return 0;  
}