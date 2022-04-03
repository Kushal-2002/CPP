#include <iostream>
#include <string>
using namespace std;
int main(){
    int s=0,c=0;
    string str;
    cin>>str;
    int l=str.length();
    for(int i=0;i<l;i++){
        s=(int)str[i];
        if(s>=65 && s<=90){
            c++;
        }
    }
    cout<<(c+1)<<endl;
}