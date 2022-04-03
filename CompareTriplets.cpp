#include <iostream>
using namespace std;

int main()
{
    int a[3],b[3];
    int c=0,d=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            c++;
        }
        else if(a[i]<b[i]){
            d++;
        }
    }
    cout<<c<<" "<<d;
}