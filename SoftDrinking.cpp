#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=(k*l)/nl;
    int y=p/np;
    int z=c*d;
    cout<<min(min(x,y),z)/n<<endl;
    return 0;
}
