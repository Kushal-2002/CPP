#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long s=0;
    
        if(n%2==0){
            s=n/2;
        }
        else{
            s=n/2-n;
        }
        
    
    cout<<s;
    return 0;
}