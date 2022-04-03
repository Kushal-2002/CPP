#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    unsigned long long int x, k;
    unsigned long long int minlcm, maxlcm ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> k;

        if (k == 1)
        {
            maxlcm = x;
            minlcm = x;
        }
        else
        {
            minlcm = 2 * x;
            maxlcm = ((x * k) - 1) * (x * k);
        }

        cout << minlcm << " " << maxlcm << endl;
    }
    return 0;
}