#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int j;
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            c++;
        }
        arr[j + 1] = key;
        
        
    }
    cout<<c;
    return 0;
}