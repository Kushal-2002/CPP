#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m;
        int a[n];
        int b[m];
        int suma = 0, sumb = 0;
        int c = 0;
        int minv = 0, maxv = 0;
        int min = INT16_MAX;
        int max = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            suma += a[j];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
            sumb += b[j];
        }
        while (suma <= sumb)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] < min)
                {
                    min = a[j];
                    minv = j;
                }
            }
            for (int k = 0; k < m; k++)
            {
                if (b[k] > max)
                {
                    max = b[k];
                    maxv = k;
                }
            }
            if (min >= max)
            {
                c = -1;
                break;
            }
            c++;
            swap(a[minv], b[maxv]);

            suma -= min;
            suma += max;
            sumb -= max;
            sumb += min;
        }

        cout<<suma<<" "<<sumb<<endl;
        // cout << c << endl;
    }
    return 0;
}