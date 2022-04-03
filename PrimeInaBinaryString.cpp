#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int convert(long long n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}
int main()
{
    int t;
    cin >> t;
    string str;

    while (t--)
    {
        cin >> str;
        int l = str.length();
        int flag = 0;
        for (int i = l-1; i > 0; i--)
        {
            int s = 0;
            for (int j = i; j < l; j++)
            {

                s = ((int)str[j] - 48) + s * 10;
                // cout<<s<<endl;
                int f = convert(s);
                cout<<f<<endl;  
                cout<<s<<endl;  
                if (isPrime(f))
                {
                    flag = 1;
                    break;
                }
                // cout<<f<<" ";
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}