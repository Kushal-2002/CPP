#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long a, b, x, y;
    double m;
    while (t--)
    {
        cin >> a >> b;
        if (a == b)
        {
            x = 0;
            y = 0;
        }
        else
        {

            x = abs(a - b);
            m = a / x;
            if(a%x!=0)
            y = (floor(m+1))*x-a;
            else{
                y=(floor(m)*x)-a;
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}