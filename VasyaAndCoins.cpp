#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, m;
    int t;
    cin >> t;
    int a,b,s;
    while (t--)
    {
        cin>>a>>b;
        if((a==0 && b!=0) || (a==0 && b==0)){
            s=1;
        }else{
            s=a+b*2+1;
        }
        cout<<s<<endl;
    }
    return 0;
}
