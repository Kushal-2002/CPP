#include <iostream>

using namespace std;

int main()
{
    int n, l;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d, m;
    int c = 0;
    cin >> d >> m;
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        l=i+m;
        if(l>n){
            break;
        }
        for (int j = i; j < l; j++)
        {
            sum += arr[j];
        }

        if (sum == d)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}