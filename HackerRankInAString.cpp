#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    int l;
    string s = "hackerrank";
    for (int i = 1; i <= n; i++)
    {
        cin >> str;
        int m=-1;
        int c=0;
        l = str.length();
        for (int k = 0; k < s.length(); k++)
        {
            for (int j = m+1; j < l; j++)
            {
                
                if (str[j] == s[k])
                {
                    m=j;
                    c++;
                    
                    break;
                }
            }
        }
        if(c==s.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}