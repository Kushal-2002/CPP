
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
  
int main(){
    int t,n,x,y,z,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int c=0;
        for(int i=2;i<=m;i++){
            if(isPrime(i) && m%i==0){
                c++;
            } 
        }
        for(int i=2;i<=n;i++){
            if(n%i==0){
                z=n/i;

            if(c>=z){
                break;
            }
            }
        }
        if(m==1){
            cout<<0<<endl;
            continue;
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        cout<<z<<endl;
    }
    return 0;
}