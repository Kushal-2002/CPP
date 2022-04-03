#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,l;
    cin>>t;
    string s;
    while(t--){
        cin>>l;
        cin>>s;
        int bal=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                bal++;
            }else{
                bal--;
                if(bal<0){
                    ans++;
                    bal=0;
                }
            }
        }
            cout<<ans<<endl;
    }
    return 0;
}