#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
        // cout << f <<endl;
    }
    cout<<(f%1000);
}