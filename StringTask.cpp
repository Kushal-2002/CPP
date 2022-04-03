#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, m, a;
    double p, q;
    string s, str = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i]!='y' && s[i]!='Y')
        {
            int ch = (int)s[i];
            if (ch >= 65 && ch <= 90)
            {
                ch += 32;
            }
            str =str+ "." + char(ch);
        }
    }
    cout << str << endl;
    return 0;
}