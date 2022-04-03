#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int q;
    cin>>q;
    string s;
    string str="";
    
    for(int i=1;i<=q;i++){
        cin>>s;
        int len=(s.length()-1);
        int arr[len];
        int flag=0;
        for(int j=0;j<s.length()-1;j++){
            arr[j]=abs(int(s[j]-s[j+1]));
        }
        int a[len];
        reverse(s.begin(),s.end());
        for(int j=0;j<s.length()-1;j++){
            a[j]=abs(int(s[j]-s[j+1]));
        }
        for(int j=0;j<s.length()-1;j++){
            if(arr[j]!=a[j]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"Not Funny"<<endl;
        }
        else{
            cout<<"Funny"<<endl;
        }

    }
    return 0;
}