#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int x, y, z, s, t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;

        z = (x - y);
        if (x >= 0 && y <= 0 || x < 0 && y < 0 && x > y || x>0 && y>0 && z>0 )
        {
            s = abs(z);
        }
        else
        {

            z =abs(x - y) ;
            if (z % 2 != 0)
            {
                s = ((z + 1) / 2) + 1;
            }
            else
            {
                s = z / 2;
            }
        }
        cout << s << endl;
    }
    return 0;
}