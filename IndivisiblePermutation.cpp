#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int arr[n];
        arr[1]=1;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 2; k <= n; k++)
            {
                if (j % k != 0)
                {

                    arr[k] = j;
                    break;
                }
            }
            for(int k=1;k<=n;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }

    }
}