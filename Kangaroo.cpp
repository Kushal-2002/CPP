#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,v1,v2,r,flag;
    
    cin>>x1>>v1>>x2>>v2;
    r=abs(x2-x1)%abs(v1-v2);
    if((r)!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
    return 0;
}
