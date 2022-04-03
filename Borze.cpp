#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin>>str;
    int l=str.length();
    for(int i=0;i<l;i++){
        if(str[i]=='.'){
            cout<<0;
        }
        else if(str[i]=='-'){
            if(str[i+1]=='.'){
                cout<<1;
            }
            else{
                cout<<2;
            }
            i++;
        }
    }
}