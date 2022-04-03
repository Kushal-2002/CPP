#include<iostream>
using namespace std;
int main(){
    int t,n, m, rb, cb, rd, cd,dr,dc ;
    dr=1,dc=1;
    cin>>t;
    int c;
    while(t--){
        cin>>n>>m>>rb>>cb>>rd>>cd;
         c=0;
        for(;;){
            if(rd>rb && cd>cb && rd<n && cd<m && rb==cb){
                if(rd<cd){
                    c=rd-rb;
                }
                else{
                    c=cd-cb;
                }
                break;
            }

        if(rb!=rd && cb!=cd){

            if(rb==n ){
                if(rb>rd && cb>cd){
                    dr=-1;
                    dc=-1;
                }
                else{

                dr=-1;
                dc=1;
                }
            }
            else if(cb==m){
                dc=-1;
                dr=1;
            }
            else if(cb==m && rb==n){
                dc=-1;
                dr=-1;
            }
            rb=rb+dr;
            cb=cb+dc;
            c++;
            
           
        }
        else{
            break;
        }
        }
        cout<<c<<endl;
        
    }
}