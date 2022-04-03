#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,k,n;
    cin >> t;
    while(t--){
        cin>>n>>k;
        int x=(2*k)-1;
        int c=0,d=0;
        char arr[n+1][n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]='.';
            }
        }
        if(x>n){
            cout<<-1<<endl;
        }
        else{
            while(k>0){
                arr[c][d]='R';
                c+=2;
                d+=2;
                k--;
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}