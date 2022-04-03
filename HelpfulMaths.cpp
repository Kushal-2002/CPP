#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l = str.length();
    int a = 0, b = 0, c = 0;
    string s;
    for (int i = 0; i < l; i = i + 2)
    {
        if (str[i] == '1')
        {
            a++;
        }
        else if (str[i] == '2')
        {
            b++;
        }
        else if (str[i] == '3')
        {
            c++;
        }
    }
    for (int j = 1; j <= a; j++)
    {
        
            s+="1+";
        
    }
    for (int j = 1; j <= b; j++)
    {
        
                       
            s+="2+";
        
    }
    for (int j = 1; j <= c; j++)
    {
        
        
        {
            s+= "3+";
        }
    }
    cout<<s.substr(0,l)<<endl;
    return 0;
}