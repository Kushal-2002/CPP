#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int I,J;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                I=i;
                J=j;
            }
        }
    }
    cout<<abs(I-2)+abs(J-2)<<endl;
    return 0;
}