
// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

// Driver program to test above function
int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int arr[n];
        int ans;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
            ans=0;
        for (int j = 2;; j++)
        {
            int c = 0;
            for (int f = 0; f < n; f++)
            {
                int g = gcd(j, arr[f]);
                if (g == 1)
                {
                    c++;
                }
                else{
                    break;
                }
            }
            if (c == n)
            {
                ans=j;
                break;
            }
        }
        cout << ans << endl;
    }
}