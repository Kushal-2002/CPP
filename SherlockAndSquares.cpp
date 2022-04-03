#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p,q;
    int max=0;
    for(int i=1;i<=n;i++){
        cin>>p>>q;
        max=sqrt(p);
        int c=0;
        for(int j=p;j<=q;j++){
            int m=sqrt(j);
            if(m>max){
                c++;
                max=m;
            }
        }
        cout<<c<<endl;
    }
}