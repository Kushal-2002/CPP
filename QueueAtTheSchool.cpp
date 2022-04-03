#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,t;
    string str;
    cin>>n>>t;
    cin>>str;
    char ch;
    for(int i=1;i<=t;i++){
        for(int j=1;j<n;j++){
            if(str[j]>str[j-1]){
                 ch=str[j];
                str[j]=str[j-1];
                str[j-1]=ch;
                j++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}