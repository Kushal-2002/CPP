#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int s=0;
    for(int i=0;i<str.length();i++){
        int x=((int)str[i])-48;
        s=s+arr[x-1];
    }
    cout<<s<<endl;
    return 0;
}