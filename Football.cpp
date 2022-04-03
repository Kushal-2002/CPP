#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string s1="1111111";
    string s2="0000000";
    string s;
    int flag=0;
    for(int i=0;i<str.length();i++){
        s=str.substr(i,7);
        // cout<<s<<endl;
        if(s1.compare(s)==0 || s2.compare(s)==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}