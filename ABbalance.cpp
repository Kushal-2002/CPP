#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str, s1;
    cin >> str;
    while (t--)
    {
        cin >> str;
        int l = str.length();
        int c = 0, d = 0;
        int k=0;
        for (int i = 0; i < l - 1; i++)
        {
            s1 = str.substr(i, 2);
            if (s1.compare("ab") == 0)
            {
                c++;
            }
            if (s1.compare("ba") == 0)
            {
                d++;
            }
        }
        if (c > d)
        {
            s1 = "ab";
            k = c;
            for (int i = 0; i < k; i++)
            {
                string s2=str.substr(i, 2);
                if (s2.compare(s1) == 0 && str[i-1]=='a')
                {
                    str[i]='b';
                }
                else if(str.substr(i, 2).compare(s1) == 0 && str[i+2]=='b'){
                    str[i+1]='a';
                }
            }
        }
        else if (d > c)
        {
            s1 = "ba";
            k = d;
            for (int i = 0; i < k; i++)
            {
            string s2=str.substr(i, 2);
            if (s2.compare(s1) == 0 && str[i-1]=='a')
                {
                    str[i]='a';
                }
                else if(str.substr(i, 2).compare(s1) == 0 && str[i+2]=='b'){
                    str[i+1]='b';
                }
            }
        }
        else if(c==d){
            cout<<str<<endl;
            break;
        }
        cout<<str<<endl;
    }
    return 0;
}