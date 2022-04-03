#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int k=sizeof(a)/sizeof(a[0]);
        sort(a,a+k);
        sort(b,b+k);
        int flag=0;
        for(int i=0;i<n;i++){
            int f=b[i]-a[i];
            if(f>=2 || f<0){
                flag=1;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}