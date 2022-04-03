#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n, d, c = 0;
    int g;
    cin>>i>>j>>k;
    for (int l = i; l <= j; l++)
    {
        n = l;
        int s = 0;
        while (n > 0)
        {
            d = n % 10;
            s = s * 10 + d;
            n = n / 10;
        }
        g = abs(s - l);
        if (g % k == 0)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}