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
        if(a[i]%2!=0 && i!=0){
            a[i]=a[i]+1;
            a[i-1]++;
            c++;
        }
        else if(a[i]%2!=0  && i!=n-1){
            a[i]=a[i]+1;
            a[i+1]++;
            c++;
        }
            
    }
    cout<<c;
}