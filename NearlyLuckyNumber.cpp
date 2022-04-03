#include <iostream>
using namespace std;
int lucky(long long n){
    int c=0;
    int copy=n;
    while (n > 0)
    {
        long long k = n % 10;
        if (k != 4 && k != 7)
            c++;
        n = n / 10;
    }
    
    if(c>0 || copy==0){
        return 0;
    }
    else{
        return 1;
    }

}
int main()
{
    long long n;
    cin >> n;
    long long k;
    long long c = 0, d = 0;
    while (n > 0)
    {
        k = n % 10;
        if (k != 4 && k != 7)
            c++;
        n = n / 10;
        ++d;
    }
    // cout<<d;
    long long ans=d-c;
    // cout<<ans;
    int f=lucky(ans);
    if (f == 0)
    {

        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}