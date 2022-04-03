#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        string ans;

        if (a > b)
        {
            k = a + (a + 1);

            for (int j = 1; j <= k; j++)
            {
                if (j % 2 != 0)
                {
                    ans += "0";
                }
                else
                {
                    ans += "1";
                }
            }
       
        }
        else if (a < b)
        {
            k = b + (b + 1);
            
            for (int j = 1; j <= k; j++)
            {
                if (j % 2 != 0)
                {
                    ans += "1";
                }
                else
                {
                    ans += "0";
                }
            }
            
        }
        else if (a == b)
        {
            k = a + b + 2;
            
            for (int j = 1; j <= k; j++)
            {
                if (j % 2 != 0)
                {
                    ans += "0";
                }
                else
                {
                    ans += "1";
                }
            }
        }
        cout << k << endl;
        cout << ans << endl;
    }
}