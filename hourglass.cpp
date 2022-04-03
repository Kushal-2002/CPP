#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    int sum_max = INT16_MIN;
    
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n-2; i++)
    {
        int top = 0, mid = 0;
        int bottom = 0;
        for (int j = 0; j < m-2; j++)
        {
        int sum = 0;
            // top
            for (int col = j; col < j + 3; col++)
            {
                sum+=  arr[i][col];
            }
            // mid
            sum+=  arr[i + 1][j + 1];
            //bottom
            for (int col = j; col < j + 3; col++)
            {
                sum+=arr[i + 2][col];
            }
            if(i==0 && j==0){
                sum_max=sum;
            }
            
            if (sum > sum_max)
            {
                sum_max = sum;
            }
        }
    }
    cout << sum_max << endl;
}