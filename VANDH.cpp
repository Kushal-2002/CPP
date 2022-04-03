#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m;
        string s = "";
        if (n > m)
        {
            n = n - m;
            while (m != 0)
            {
                s += "01";
                m--;
            }

            while (n != 0)
            {
                s += "010";
                n--;
            }
        }
        else if (n < m)
        {
            m = m - n;
            while (n != 0)
            {
                s += "10";
                n--;
            }

            while (m != 0)
            {
                s += "101";
                m--;
            }
        }
        else{
            while(n+1!=0){
                s+="01";
                n--;
            }
        }
        cout << s.length() << endl;
        cout << s << endl;
    }
    return 0;
}