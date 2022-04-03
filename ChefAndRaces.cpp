#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, y, a, b, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
    int c = 0, d = 0;

        cin >> x >> y >> a >> b;
        if (x == a || x == b)
        {
            c++;
        }
        if (y == a || y == b)
        {
            d++;
        }
        cout << 2 - (c + d) << endl;
    }
        return 0;
}