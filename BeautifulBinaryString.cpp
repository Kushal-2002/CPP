#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int c=0;
    string s1;
    for(int i=0;i<str.length();i++){
        s1=str.substr(i,3);
        if(s1.compare("010")==0){
            c++;
            i+=2;
        }
    }
    cout<<c<<endl;
}