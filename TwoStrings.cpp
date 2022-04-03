#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    for (int i = 1; i <= n; i++)
    {
        cin >> s1;
        cin >> s2;
        int c = 0;

        for (int j = 0; j < s1.length(); j++)
        {
            int l=s2.find(s1[j]);
            if(l>=0){
                c++;
                break;
            }
            
            
        }
        if (c > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}