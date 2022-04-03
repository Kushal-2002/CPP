#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c, t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a>> b >> c;
        if(b>=a && b<=c || b>=c &&b<=a ){
            cout<<b<<endl;
        }
        else if(a>=b && a<=c || a>=c && a<=b){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }


return 0;
}