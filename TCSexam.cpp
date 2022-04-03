#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,dsa,toc,dm;
    int dsa1,toc1,dm1;
    cin>>t;
    while(t--){
        cin>>dsa>>toc>>dm;
        cin>>dsa1>>toc1>>dm1;
        int total=dsa+toc+dm;
        int total1=dsa1+toc1+dm1;
        if(total1>total){
            cout<<"SLOTH"<<endl;
        }
        else if(total1<total){
            cout<<"DRAGON"<<endl;
        }
        else{
            if(dsa1>dsa){
                cout<<"SLOTH"<<endl;
            }
            else if(dsa1<dsa){
               cout<<"DRAGON"<<endl; 
            }
            else{
                if(toc1>toc){
                    cout<<"SLOTH"<<endl;
                }
                else if(toc1<toc){
                    cout<<"DRAGON"<<endl;
                }
                else{
                    cout<<"TIE"<<endl;
                }
            }
        }

    }
    return 0;
}