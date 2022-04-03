#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
    while (t--)
    {
        cin >> str;
        string s=str;
        int l = str.length();
        int flag1=0;
        for (int i = 0; i < l - 1; i++)
        {
            int flag=0;
            if (str[i] != 'K')
            {

                for (int j = i + 1; j < l; j++)
                {
                    if (str[j] != str[i] && str[j] != 'K')
                    {
                        str[j] = 'K';
                        flag = 1;
                        break;
                    }
                }
                if(flag==0){
                    flag1=1;
                    break;
                }
            }
        }
        if(flag1==1 || s[0]==s[l-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}