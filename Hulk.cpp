#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1=" I hate";
    string s2=" I love";
    string s3=" that";
    
    string s=" it";
    for(int i=1;i<=n;i++){
        if(n%2==0){

        if(i%2==0){
            s=s1+s;
        }
        else{
            s=s2+s;
        }
        }
        else{
        if(i%2!=0){
            s=s1+s;
        }
        else{
            s=s2+s;
        }

        }
        if(i!=n)
        s=s3+s;
    }
    cout<<s<<endl;
    return 0;
}