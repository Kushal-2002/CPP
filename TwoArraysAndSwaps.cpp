#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        int s=0;
        int b1[n];
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            
        }
        for(int j=0;j<n;j++){
         
            cin>>b1[j];
        }
        int f=sizeof(a)/sizeof(a[0]);
        int g=sizeof(b1)/sizeof(b1[0]);

        sort(a,a+f);
        sort(b1,b1+g);
        for(int j=0;j<k;j++){
            if(b1[n-j-1]>a[j])
            swap(b1[n-j-1],a[j]);
        }
        for(int j=0;j<n;j++){

            s=s+a[j];
        }
        cout<<s<<endl;
    }      
}