#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
    }

    return 0;
}