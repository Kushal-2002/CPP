#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int f=0;
        int k=0;
        double yx=(double)y/(double)x;
        int n=(int)log10(yx);
        for(int i=n;i>=0;i--){
            f=(int)(pow(10,i)+.5)*(x);
            k+=y/f;
            if(i==0){
                k+=y%f;
            }
            y=y%f;
        }
    cout<<k<<endl;
    }
    
    return 0;
}