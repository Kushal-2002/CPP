#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int c=0,max=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int f=a[i];
        c=0;
        for(int j=i+1;j<n;j++){
            if(f==a[j]){
                c++;
            }
        }
        if(c>max){
            max=c;
        }
    }
    cout<<(n-max-1);
}