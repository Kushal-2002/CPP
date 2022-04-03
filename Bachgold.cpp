#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    x = n % 2;
    int k = n / 2;
    cout<<k<<endl;
    if (x == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        for(int i=1;i<=k-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<" ";
    }
    return 0;
}
