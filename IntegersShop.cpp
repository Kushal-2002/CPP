#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int l[n];
        int r[n];
        int c[n];
        int min = INT_MAX;
        int max = INT_MIN;
        int f;
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i] >> c[i];
        }
        int minc = c[0];
        int maxc = c[0];
        int maxd = 0;
        int maxdc;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = 0; j <= i; j++)
            {

                if (l[j] < min)
                {
                    min = l[j];
                    minc = c[j];
                }
                if (l[j] > max)
                {
                    max = l[j];
                    maxc = c[j];
                }
                if (l[j] == max && c[j] < maxc)
                {
                    max = l[j];
                    maxc = c[j];
                }
                if (l[j] == min && c[j] < minc)
                {
                    min = l[j];
                    minc = c[j];
                }
                f = r[j] - l[j];
                if (f > maxd)
                {
                    maxd = f;
                    maxdc = c[j];
                    cout << maxdc << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
                cout << minc + maxc << endl;
        }
    }
    return 0;
}