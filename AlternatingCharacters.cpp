#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=1;i<=n;i++){
        cin>>str;
        int c=0;
        for(int j=0;j<str.length()-1;j=j+1){
            if(str[j]==str[j+1]){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}