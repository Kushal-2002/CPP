#include <iostream>
using namespace std;
int main()
{
    long initial = 3;
    long c = initial+1;
    long t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        if (c == 1)
        {
            initial*=2;
            c=initial;
            c++;
        }
        c--;
    }
    cout << c;
}