#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str,s;
    for(int i=1;i<=t;i++){
        cin>>str;

        int l=str.length();
        for(int i=1;i<l-2;i++){
            if(str[i]==str[i+1]){
                str[i+1]=' ';
            }
        }
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        cout<<str<<endl;

    }
    return 0;
}