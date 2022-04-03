#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int main()
{
    int n, t;
    cin>>t;
    string str;
    for (int i = 1; i <= t; i++)
    {
        cin>>str;
        int l=str.length();
        int k=l/2;
        string s1=str.substr(0,k);
        string s2=str.substr(k);
        if(s1.compare(s2)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}