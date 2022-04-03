#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string str;
    while(t--){
        cin>>n;
        cin>>str;
        int a=0;
        char c='R';
        for(int i=0;i<n;i++){
            if(str[i]=='R' || str[i]=='B'){
                a=i;
                c=str[i];
                break;
            }
        }
        if(a%2!=0 && c=='R'){
            str[0]='B';
        }
        else if(a%2!=0 && c=='B'){
            str[0]='R';
        }
        if(a%2==0 && c=='R'){
            str[0]='R';
        }
        else if(a%2==0 && c=='B'){
            str[0]='B';
        }
        for(int i=1;i<n-1;i++){
            if(str[i]=='?'){
                if(str[i+1]=='R' || str[i-1]=='R'){
                    str[i]='B';
                }
                else if(str[i+1]=='B' || str[i-1]=='B'){
                    str[i]='R';
                }
            }
        }
        // if(str[0]=='?' && str[1]=='R'){
        //     str[0]='B';
        // }
        // else if(str[0]=='?' && str[1]=='B'){
        //     str[0]='R';
        // }
        if(str[n-1]=='?' && str[n-2]=='R'){
            str[n-1]='B';
        }
        else if(str[n-1]=='?' && str[n-2]=='B'){
            str[n-1]='R';
        }
        cout<<str<<endl;
    }
    return 0;
}