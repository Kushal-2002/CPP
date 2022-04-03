#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string str;
    char s;
    string s1;
    cin >> str;
    int c = 0;
    int l;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] > 48 && str[i] <= 57)
        {
            l = i;
        }
    }

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == '*')
        {
            s = str[i - 1];
            str[i - 1] = str[i - 2];
            str[i - 2] = s;
        }
        if (str[i] >= 48 && str[i] <= 57)
        {
            s1 = str[i] + s1;
        }
    }

    for (int i = str.length() - 1; i >= 0; i--)
    {

        if (str[i] == '0')
        {
            str[i] = str[c];
            // str[c]='';
            // str.erase(c,c+1);
            c++;
        }
    }
    str.erase(remove(str.begin(), str.end(), '*'), str.end());
    str.erase(0, l+1);

    cout << str << endl;
    
    return 0;
}