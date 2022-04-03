#include <iostream>
using namespace std;
int main()
{
    int t, n, a;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int c = 0;
        int x;
            int a = 0;
            int b = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (j % 2 != x % 2)
            {
                if (j % 2 == 0)
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    return 0;
}