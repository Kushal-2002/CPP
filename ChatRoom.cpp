#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string str;
    string s="hello";
    int c,p=0;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]==s[p]){
            c++;
            p++;
        }
    }
    if(p>=5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}