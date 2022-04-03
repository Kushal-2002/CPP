#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, s,a;
    int t;
    cin >> t;
    while(t--){
        cin>>n>>a;
        if(n==1){
            if(a%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;

            }
        }
        else if(n>1 && a%2!=0){
            if(n%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
        else{
            cout<<"impossible"<<endl;
        }
        
    }
    return 0;
}