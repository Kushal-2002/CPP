#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, n;
    string str, s;
    int a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        int flag = 0,flag1=0;
        int l = str.length();
        for (int i = 0; i < l - 3; i++)
        {
            s = str.substr(i, 4);
            if (s.compare("chef") == 0)
            {
                if (flag != 1)
                    a = i;
                flag = 1;
            }
            if (s.compare("code") == 0)
            {
                if (flag1 != 1)
                    b = i;
                flag1 = 1;


            }
        }
        if (b < a)
        {
            cout << "AC" << endl;
        }
        else
        {
            cout << "WA" << endl;
        }
    }
}