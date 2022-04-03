#include <bits/stdc++.h>
#include <string>
using namespace std;
void solve()
{
    

    string str, s1;
  
    int m;
    cin>>m;
    cin >> str;
    int n = str.length();
    int flag = 0;
    for (char c = 'A'; c <= 'Z'; c++)
    {
    int  first = n,last=-1;
        for (int j = 0; j < n; j++)
        {
            if (c == str[j])
            {
                first = min(first, j);
                last = max(last, j);
            }
        }
        for (int j = first; j <= last; j++)
        {
            if (str[j] != c)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}