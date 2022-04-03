#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0;
        for(int d=1;d<=9;d++){
            int s=0;
            for(int k=0;k<=8;k++){
                s=s+d*((int)(pow(10,k)+.5));
            if(s<=n){
                c++;
            }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}