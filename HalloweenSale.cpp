#include <iostream>
using namespace std;
int main()
{
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    int sum = 0;
    int c = 0;
    while (sum <= s)
    {
        sum = sum + p;
        if (p >= m)
        {
            p = p - d;
        }
        if(p<m){
            p=m;
        }
        c++;
    }
    cout << (c-1);
}