#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >>m;
    int ch[90];
    for (int i = 0; i < 90; i++)
    {
        ch[i] = 0;
    }
    char arr[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            ch[(int)arr[i][j]]++;
        }
    }
    if (ch[67] > 0 || ch[77] > 0 || ch[89])
    {
        cout << "#Color";
    }
    else 
        cout << "#Black&White";
    return 0;
}