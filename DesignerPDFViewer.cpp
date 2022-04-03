#include<iostream>
#include <string>
using namespace std;
int main(){
    int arr[26];
    string str;
    int x;
    int max=0;
    for(int i=0;i<26;i++){
        cin>>arr[i];
    }
    cin>>str;
    for(int i=0;i<str.length();i++){
        x=arr[(int)str[i]-97];
        
        if(x>max){
            max=x;
        }
    }
    cout<<(str.length()*max);
    
}