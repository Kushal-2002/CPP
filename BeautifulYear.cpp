#include<iostream>
#include<string>
using namespace std;
int main(){
    int c,ans;
    cin>>c;
    int n=c;
    for(;;){
        n++;
        int k=n;
        int a=k%10;
        k=k/10;
        int b=k%10;
        k=k/10;
        int c=k%10;
        k=k/10;
        int d=k%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && d!=b && d!=c ){
            ans=n;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;  
}