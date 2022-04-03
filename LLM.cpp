#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    int s1, s2;

    for (int i = 1; i <= n; i++)
    {
        cin >> str;
        int l = str.length();
        int c=0;
        for (int j = 0; j < l; j++)
        {
            s1 = (int)str[j];
            s2=(int)str[l-j-1];
            while(s1<s2){
                s2--;
                c++;
            }
        }
        cout<<c<<endl;
    }
}