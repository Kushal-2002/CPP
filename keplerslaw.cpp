#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1,t2,r1,r2;
    cin >> t;
    while(t--){
        cin>>t1>>t2>>r1>>r2;
        double x1=(double)((int)(pow(t1,2)+.5))/(double)((int)(pow(r1,3)+.5));
        double x2=(double)((int)(pow(t2,2)+.5))/(double)((int)(pow(r2,3)+.5));
        // double x2=(double)(t2*t2*t2)/(double)(r2*r2*r2)2
        cout<<x1<<x2;
        if(x1==x2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}