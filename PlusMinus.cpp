#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n=0,N=0,c=0,d=0,z=0;
    double cr,dr,zr;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>N;
        if(N>0){
            c++;
        }
        else if(N<0){
            d++;
        }
        else{
            z++;
        }
    }
    cr=double(c)/double(n);
    dr=double(d)/double(n);
    zr=double(z)/double(n);
    
    cout<<fixed<<setprecision(6)<<(cr)<<endl;
    cout<<fixed<<setprecision(6)<<(dr)<<endl;
    cout<<fixed<<setprecision(6)<<(zr)<<endl;
    return 0;
}