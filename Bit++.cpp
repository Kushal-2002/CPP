#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    int x=0;
    for(int i=1;i<=n;i++){
        cin>>str;
        if(str[0]=='+' || str[1]=='+' || str[2]=='+'){
            x++;
        }
        else if(str[0]=='-' || str[1]=='-' || str[2]=='-'){
            x--;
        }
    }
    cout<<x;
    return 0;
}