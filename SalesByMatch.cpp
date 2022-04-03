#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]!=0){
                if(a[j]==a[i]){
                    a[j]=0;
                    a[i]=0;
                    c++;
                }
            }
        }
    }
    cout<<c;
}