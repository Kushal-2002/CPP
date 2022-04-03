#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,c,d;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apple[m],orange[n];
    for(int i=0;i<m;i++){
        cin>>apple[i];
    }
    for(int i=0;i<n;i++){
        cin>>orange[i];
    }
    for(int i=0;i<m;i++){
        apple[i]+=a;
    }
    for(int i=0;i<n;i++){
        orange[i]+=b;
    }
    for(int i=0;i<m;i++){
        if(apple[i]>=s && apple[i]<=t ){
            c++;
        }
    }
    for(int i=0;i<n;i++){
        if(orange[i]>=s && orange[i]<=t ){
            d++;
        }
    }
    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}