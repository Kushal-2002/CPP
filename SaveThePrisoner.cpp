#include <iostream>
using namespace std;
int main()
{
    int n, m, s;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m >> s;
        cout<<(((s+m-2)%n)+1)<<endl;
    }
}