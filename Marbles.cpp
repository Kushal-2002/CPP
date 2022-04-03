#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        char s1[n + 1];
        char s2[n + 1];
        for (int j = 0; j < n; j++)
        {
            cin >> s1[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> s2[j];
        }
        int c = 0;
        int c1 = 0, d1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s1[j] == '?' && !isVowel(s2[j]))
            {
                c1++;
            }
            if (s2[j] == '?' && (s1[j] != 'a' || s1[j] != 'e' || s1[j] != 'i' || s1[j] != 'o' || s1[j] != 'u'))
            {
                c1++;
            }
            if (s1[j] == '?' && (s2[j] == 'a' || s2[j] == 'e' || s2[j] == 'i' || s2[j] == 'o' || s2[j] == 'u'))
            {
                d1++;
            }
            if (s2[j] == '?' && (s1[j] == 'a' || s1[j] == 'e' || s1[j] == 'i' || s1[j] == 'o' || s1[j] == 'u'))
            {
                d1++;
            }
        }
        if (c1 >= d1)
        {
            for (int j = 0; j < n; j++)
            {
                if (s1[j] == '?')
                {
                    s1[j] = 'u';
                }
                if (s2[j] == '?')
                {
                    s2[j] = 'u';
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (s1[j] == '?')
                {
                    s1[j] = 'c';
                }
                if (s2[j] == '?')
                {
                    s2[j] = 'c';
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (s1[j] != s2[j])
            {
                if ((s1[j] == 'a' || s1[j] == 'e' || s1[j] == 'i' || s1[j] == 'o' || s1[j] == 'u') && (s2[j] != 'a' || s2[j] != 'e' || s2[j] != 'i' || s2[j] != 'o' || s2[j] != 'u'))
                {
                    c++;
                }
                else if ((s2[j] == 'a' || s2[j] == 'e' || s2[j] == 'i' || s2[j] == 'o' || s2[j] == 'u') && (s1[j] != 'a' || s1[j] != 'e' || s1[j] != 'i' || s1[j] != 'o' || s1[j] != 'u'))
                {
                    c++;
                }
                else if ((isVowel(s2[j]) && (s1[j] == 'a' || s1[j] == 'e' || s1[j] == 'i' || s1[j] == 'o' || s1[j] == 'u'))
                {
                    c = c + 2;
                }
                else if ((s2[j] != 'a' || s2[j] != 'e' || s2[j] != 'i' || s2[j] != 'o' || s2[j] != 'u') && (s1[j] != 'a' || s1[j] != 'e' || s1[j] != 'i' || s1[j] != 'o' || s1[j] != 'u'))
                {
                    c = c + 2;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}