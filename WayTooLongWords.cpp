#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str;
    for(int i=1;i<=t;i++){
        cin>>str;
        if(str.length()<=10){
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
    }
    return 0;
}