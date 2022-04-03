#include <iostream>
using namespace std;
int main(){
    int p,q;
    cin>>p>>q;
    int c=0,d=0;
    int digit=0;
    for(int i=p;i<=q;i++){
        int n=i;
        while(n>0){
             digit=n%10;
            c++;
            n=n/10;
        }
        int n2=i*i;
        while(n2>0){
             digit=n2%10;
            d++;
            n2=n2/10;
        }
        int l=(i*i)/(10^c);
        int r=(i*i)%(10^(d-c));
        int sum=l+r;
        if(sum==i){
            cout<<i;
        }
    }
}