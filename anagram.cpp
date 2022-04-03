#include <iostream>
#include <string>
using namespace std;
int main()
{
    int q;
    string str;
    cin >> q;
    int flag = 0;
    for (int i = 1; i <= q; i++)
    {
        cin >> str;
        int len = str.length();
        if(len%2==0){

        
        string s1 = str.substr(0, len / 2);
        string s2 = str.substr(len / 2, len / 2);
        int c = 0;
        for (int k = 0; k < s1.length(); k++)
        {
            for (int m = 0; m < s2.length(); m++)
            {
                if (s1[k] == s2[m])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                c++;
            }
            else
            {
                flag = 0;
            }
        }
        cout << c << endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}