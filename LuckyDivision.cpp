#include<iostream>
using namespace std;
bool lucky(int k){
    int lastDigit;
    while(k>0){
        lastDigit=k%10;
        if(lastDigit!=4 && lastDigit!=7){
            return false;
        }
        k=k/10;
    }
    return true;
}
int main(){
    // int t,n,N;
    // cin>>t;
    // for(int i=1;i<=t;i++){
    //     cin>>N;
    //     int c=0;
    //     while(N>0){
    //         n=N%10;
    //         if(n==4){
    //             c++;
    //         }
    //         N=N/10;
    //     }
    //     cout<<c<<endl;
    // }
    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<=n;i++){
        if(n%i==0 && lucky(i)){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}