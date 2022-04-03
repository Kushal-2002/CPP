#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int x,y,z;
    cin>>n;
    int X=0,Y=0,Z=0;
    while(n--){
        cin>>x>>y>>z;
        X=X+x;
        Y=Y+y;
        Z=Z+z;
    }
    if(X==0 && Y==0 && Z==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}