#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
    
        double x=((double)k)/((double)2);

        cout << (int)ceil(x) << endl;
        
    }
    return 0;
}
