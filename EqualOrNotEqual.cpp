#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str;
    for(int i=1;i<=t;i++){
        cin>>str;
        int c=0;
        int l=str.length();
        for(int j=0;j<l;j++){
            if(str[j]=='N'){
                c++;
            }
        }
        if(c==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}