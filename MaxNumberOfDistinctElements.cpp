#include <iostream>
using namespace std;
int main()
{
    int t, n, N, s, A, B, C, D, E;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> N;
        int arr[N];
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[j];
        }
        for (int j = 1; j <= N; j++)
        {
            cout << arr[j];
        }
    }
}