#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    string str,s,s1;
    cin>>n;
    cin>>str;
    int c=0,max=0,maxi=0;
    for(int i=0;i<str.length();i++){
        s=str.substr(i,2);
        c=0;
        for(int j=0;j<str.length();j++){
            s1=str.substr(j,2);
            if(s1.compare(s)==0){
                c++;
                if(c>max){
                    max=c;
                    maxi=i;
                }
            }
        }
        
    }
    cout<<str.substr(maxi,2)<<endl;
    return 0;
}