#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int len = INT16_MAX;
    char ch[len];
    int d = 0;
    int c = 0;
    int l = 0;
    string str;
    for (int i = 0; i < len; i++)
    {
        cin >> ch[i];
        l++;

        if (ch[i] == '}')
        {
            break;
        }
        else if ((int)ch[i] >= 97 && (int)ch[i] <= 122)
        {
            c++;
            str = str + ch[i];
        }
    }
    for (int j = 97; j <= 122; j++)
    {

        for (int i = 0; i < c; i++)
        {
            if(str[i]==(char)j){
                d++;
                
                break;
            }
        }
    }

    cout << d << endl;
    return 0;
}