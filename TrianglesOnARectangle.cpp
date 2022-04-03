#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int t,w,h,m;
    int n,x0,xh,p,q,y0,yw;
    cin>>t;
    for(int i=1;i<=t;i++){
    int minx0=INT_MAX;
    int minxh=INT_MAX;
    int miny0=INT_MAX;
    int minyw=INT_MAX;
    int maxx0=INT_MIN;
    int maxxh=INT_MIN;
    int maxy0=INT_MIN;
    int maxyw=INT_MIN;
        cin>>w>>h;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>x0;
            if(x0<minx0){
                minx0=x0;
            }
            if(x0>maxx0){
                maxx0=x0;
            }
        }
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>xh;
            if(xh<minxh){
                minxh=xh;
            }
            if(xh>maxxh){
                maxxh=xh;
            }
        }
        cin>>p;
        for(int j=0;j<p;j++){
            cin>>y0;
            if(y0<miny0){
                miny0=y0;
            }
            if(y0>maxy0){
                maxy0=y0;
            }
        }
        cin>>q;
        for(int j=0;j<q;j++){
            cin>>yw;
            if(yw<minyw){
                minyw=yw;
            }
            if(yw>maxyw){
                maxyw=yw;
            }
        }
        int basex0=(maxx0-minx0)*h;
        int basexh=(maxxh-minxh)*h;
        int basey0=(maxy0-miny0)*w;
        int baseyw=(maxyw-minyw)*w;
        int ans=max(max(basex0,basexh),max(basey0,baseyw));
       
        cout<<ans<<endl;
    }
    
    return 0;
}