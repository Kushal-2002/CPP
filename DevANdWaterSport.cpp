#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    int z,y,a,b,c;
    while (t--)
    {
        cin>>z>>y>>a>>b>>c;
        int amt=a+b+c;
        int bal=z-y;
        

        if(amt>bal){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}