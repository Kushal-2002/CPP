#include <iostream>
using namespace std;
int main()
{
    int t, n, s, A, B, C;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> A >> B >> C;
        int c = 0;
        if (A == 7 || B == 7 || C == 7)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}