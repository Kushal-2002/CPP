#include<iostream>
using namespace std;
int main(){
    int t,k,b,ans;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>k;
        int c=0;

        for(int i=1;;i++){
            if(i%10!=3 && i%3!=0){
                c++;
            }
            if(c==k){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}