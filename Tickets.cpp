#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    int z,y,a,b,c,n,m;
    while (t--)
    {
        cin>>n>>m;
        if(n%2==0){
            y=n/2;
        }
        else{
            y=ceil(n/2+.5);
        }
        if(m%2==0){
            z=m/2;
        }
        else{
            z=ceil(m/2+.5);
        }
        cout<<y*z<<endl;
    }

    return 0;
}