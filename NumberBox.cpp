#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
              
            }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if((arr[i][j]<0 && arr[i][j-1]<0)){
                   arr[i][j]*=-1;
                   arr[i][j-1]*=-1;

               } else if(arr[i][j]<0 && arr[i][j+1]<0){
                   arr[i][j]*=-1;
                   arr[i][j+1]*=-1;
               }else if(arr[i][j]<0 && arr[i+1][j]<0){
                   arr[i][j]*=-1;
                   arr[i+1][j]*=-1;
               
               }else if(arr[i][j]<0 && arr[i-1][j]<0){
                   arr[i][j]*=-1;
                   arr[i-1][j]*=-1;
               }
              
            }

        }
    }
    return 0;
}
