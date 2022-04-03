#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    int s=0;
    for(int i=1;i<=n;i++){
        cin>>str;
        if(str[0]=='T'){
            s+=4;
        }
        else if(str[0]=='C'){
            s+=6;
        }
        else if(str[0]=='O'){
            s+=8;
        }
        else if(str[0]=='D'){
            s+=12;
        }
        else if(str[0]=='I'){
            s+=20;
        }
    }   
    cout<<s<<endl;
    return 0;
}