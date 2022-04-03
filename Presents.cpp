#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],arr1[n];
    arr[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        arr1[arr[i]]=i; 
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}