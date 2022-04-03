#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>ch[i];
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=(char)((int)ch[i]+32);
        }
    }
    for(int i=97;i<=122;i++){
        for(int j=0;j<n;j++){
            if(ch[j]==(char)i){
                c++;
                break;
            }
        }
    }
    if(c==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}