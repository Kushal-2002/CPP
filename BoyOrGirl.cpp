#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin>>str;
    int l=str.length();
    int c=0;
    sort(str.begin(),str.end());
    for(int i=1;i<l;i++){
        if(str[i]==str[i-1])
        c++;
    }
    int dc=l-c;
    if(dc%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}