#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,x,y,z,n;
    cin>>t;
    string str;
    for(int i=1;i<=t;i++){
        cin>>n;
        cin>>str;
        string s="";
        int c=0,d=0;
        for(int j=0;j<n;j++){
            if(str[j]=='1'){
                c++;
            }
            else{
                d++;
            }
        }
        if(c<d){
            x=c;
        }
        else{
            x=d;
        }
        y=n-(x*2);
        for(int j=1;j<=x;j++){
            s=s+"10";
        }
        if(x==c){
            for(int j=1;j<=y;j++){
                s=s+"0";
            }
        }
        else{
            for(int j=1;j<=y;j++){
                s=s+"1";
            }
        }
        int f=0;
        if(x==0)
        cout<<x<<endl;
        else{
            cout<<x-1<<endl;
        }
    }
    return 0;
}