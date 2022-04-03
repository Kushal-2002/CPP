#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    char arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>k;
    for (int i = 0; i < n ; i++)
    {
        int f=(int)arr[i];
        if(f>=97 && f<=122){
            f+=k;
            while(f>122){
                f=f-26;
            }
        }
        else if(f>=65 && f<=90){
            f+=k;
            while(f>90){
                f=f-26;
            }
        }
        arr[i]=(char)f;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}