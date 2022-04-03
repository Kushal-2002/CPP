#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int  n,k;
    while (t--)
    {
        cin>>n>>k;
        int z=0;
        int x[n],y[n];
        int p;
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                p=abs(x[i]-x[j])+abs(y[i]-y[j]);
                if(p>k){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                z=1;
                break;
            }
        }
        if(z==1){
            cout<<1<<endl;
        }else{
            cout<<-1<<endl;

        }
    }
}