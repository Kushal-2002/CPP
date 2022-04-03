#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,d,k,f,x;

    cin>>t;
    while(t--){
        cin>>n>>d;
        long long p=1;
        for(int i=1;i<=d;i++){
            if(p>n){
                break;
            }
        
            if(i>10){
                p*=3;
            }
            else
            p*=2;

        }
        if(p>n)
        cout<<n<<endl;
        else
        cout<<p<<endl;
        // if(d<=10){
        //     p=pow(2,d);
        // x=(long long)(p+.5);
        // }
        
        // else{
        //     p=pow(2,10);
        // x=(long long)(p+.5);
        // }
        // if(x>n){
        //     x=n;
        // }
        // k=d-10;
        // if(k>0){
        //     p=pow(3,k);
        //     x=(long long)(p+.5)*x;
        //     if(x>n){
        //         x=n;
        //     }
        //     f=x;
        // }
        // else{
        //     f=x;
        // }
        // f=(int)(pow(10,8)+.5);
        // f=(int)(pow(2,1000000/2)+.5);
        // cout<<f<<endl;

    }

    return 0;
}