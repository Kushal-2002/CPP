#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int k;
    cin>>k;
    cin >> str;
    int n = str.length();
    string numbers="0123456789";
    string lower_case="abcdefghijklmnopqrstuvwxyz";
    string upper_case="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    int num=0,u_case=0,l_case=0,s_char=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<numbers.length();j++){
            if(str[i]==numbers[j]){
             num=1;
            }
        }
        for(int j=0;j<upper_case.length();j++){
            if(str[i]==upper_case[j]){
             u_case=1;
            }
        }
        for(int j=0;j<lower_case.length();j++){
            if(str[i]==lower_case[j]){
             l_case=1;
            }
        }
        for(int j=0;j<special_characters.length();j++){
            if(str[i]==special_characters[j]){
             s_char=1;
            }
        }
    }
    int sum=num+u_case+l_case+s_char;
    if(sum<4 && n>=6){
        cout<<((4-sum));
    }
    else if(sum<4 && n<6){
        if((4-sum)>(6-n))
        {
            cout<<4-sum;
        }
        else
        cout<<(6-n);
    }
    else if(sum==4 && n<6){
        cout<<(6-n);
    }
    return 0;
}