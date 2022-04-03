#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, w, h;
    cin >> t;
    while (t--)
    {
        cin >> w >> h >> n;
        int c=0;
    for(;;)
        {

            if (w % 2 == 0)
            {
                c++;
                w = w / 2;
            }
            if (h % 2 == 0)
            {
                c++;
                h = h / 2;
            }
            if(h%2!=0 && w%2!=0){
                break;
            }
        }
        
        int k = (int)(pow(2, c) + .5);
        if (k >= n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}