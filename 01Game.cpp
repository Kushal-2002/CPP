#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str,s;

    while(t--){
        cin>>str;
        int c0=0,c1=0;
        s="";
        
        for(int i=0;i<str.length();i++){
            if(str[i]=='0'){
                c0++;
            }else{
                c1++;
            }
        }
        int m=min(c0,c1);
        if(m%2==1){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}