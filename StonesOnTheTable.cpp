#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    char ch[n+1];
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    for(int i=1;i<n;i++){
        if(ch[i]==ch[i-1]){
            c++;
        }
    }
    cout<<c<<endl;

}