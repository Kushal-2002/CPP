#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s1,s2,s3,s;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s=s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    if(s.compare(s3)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}