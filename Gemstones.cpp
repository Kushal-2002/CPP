#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 97; i <= 122; i++)
    {
        int c=0;
        for (int j = 0; j < n; j++)
        {
            string s=arr[j];
            for(int k=0;k<s.length();k++){
                if(s[k]==(char)i){
                    c++;
                    break;
                }
            }
        }
        if (c == n)
        {
            d++;
        }
    }
    cout << d << endl;
    return 0;
}