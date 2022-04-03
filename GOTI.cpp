#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int k = 0;
    int l = str.length();
    int arr[26];
    int s = 0;
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (str[j] == (char)(i + 97))
            {
                arr[i]++;
                k = i;
            }
        }
    }
    int c = 0;
    if (l % 2 == 0)
    {
        for (int i = 0; i < k + 1; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << "NO";
                break;
            }
            else
            {
                cout << "YES";
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < k + 1; i++)
        {
            if (arr[i] % 2 != 0)
            {
                c++;
            }
            else
            {
                s++;
            }
        }
        if (k + 1 - c == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

    }
        return 0;
}