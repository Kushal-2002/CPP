#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s;
    reverse(s.begin(),s.end());
    cin>>s1;
    if(s1.compare(s)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}