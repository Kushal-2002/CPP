#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int f=n%10;
        int c=0;
        while(n>0){
            int x=n%10;
            c++;
            n=n/10;
        }
        int s=0;
        for(int i=1;i<=c;i++){
            s=s+i;
        }
        cout<<(10*(f-1))+s<<endl;
    }
    return 0;
}