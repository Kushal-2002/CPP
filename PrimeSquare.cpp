#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        return true;
    }else{
        return false;
    }
}
int main(){
    long long t,a,b,c,d,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a,x;
        if(isPrime(n)){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }else{
        
            x=(n-1);
            for(int i=x+1;i<=200;i++){
                if(isPrime(i) && isPrime(i-x)==false){
                    a=i-x;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        cout<<a<<" ";
                    }else{
                        cout<<1<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;   
}