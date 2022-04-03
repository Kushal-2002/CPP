#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t, x, y, z, n, k;
    cin >> t;
    string str, s, s1;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> k;
        cin >> str;
        s = "";
        s1 = str;
        s="";
        int m=k-1;
        int n=1;    
        for (int j =0; j <k; j++)
        {
            if(j%2==0){
                s=str[m]+s;
                m--;
            }
            else{
                s=str[n]+s;
                n++;
            }
            
        }

        s = s + str[0]+str.substr(k);
        cout << s << endl;
    }
    return 0;
}