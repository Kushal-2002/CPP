#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    int c=0;
    int v=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='U')
        {

        c++;
        }
        if(arr[i]=='D')
        c--;
        if(c==0 && arr[i]=='U')
        v++;
    }
    cout<<v;
}