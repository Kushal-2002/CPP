#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        cin>>n;
        int sqr=sqrt(n);
        cout<<sqr<<endl;
    }

    return 0;
}