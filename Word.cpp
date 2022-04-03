#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,s;
    cin>>str;
    int l=str.length();
    int c=0;
    
    for(int i=0;i<l;i++){
        int a=(int)str[i];
        if(a>=65 && a<=90){
            c++;
        }
    }
    int d=l-c;
    if(d>=c){

    for(int i=0;i<l;i++){
        int a=(int)str[i];
        if(a>=65 && a<=90){
            a+=32;
        }
        s+=(char)a;
    }
    }
    else{
        for(int i=0;i<l;i++){
        int a=(int)str[i];
        if(a>=97 && a<=122){
            a-=32;
        }
        s+=(char)a;
    }
    }
    cout<<s<<endl;
    return 0;
}