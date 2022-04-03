#include <iostream>
#include <string>
#include <algorithm>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l=s1.length();
    int sum1=0,sum2=0,flag=0;
    for(int i=0;i<l;i++){
        int  ch1=(int)tolower(s1[i]);
        int ch2=(int)tolower(s2[i]);
        if(ch1>ch2){
            cout<<1<<endl;
            flag=1;
            break;
        }
        else if(ch1<ch2){
            cout<<-1<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag!=1){
        cout<<0<<endl;
    }
    return 0;
}