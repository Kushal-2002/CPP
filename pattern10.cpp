#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int j;
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--;

        }
        int l=2;
        for(;j<=n+i-1;j++){
            cout<<l;
            l++;
        }
        
        cout<<endl;
    }
    return 0;
}