#include <iostream>
using namespace std;
int main(){
    int b,n,m,c=0;
    cin>>b>>n>>m;
    int k[n],d[m];
    int max=INT16_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int i=0;i<m;i++){
        cin>>d[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=k[i]+d[j];
            if(sum<=b){
                if(sum>max){
                    max=sum;
                }
                c++;
            }
        }
    }
    if(c>0)
    cout<<max;
    else
    cout<<-1;
}