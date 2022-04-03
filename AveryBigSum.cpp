#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long n=0,N=0;
    long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>N;
        sum=sum+N;
    }
    cout<<sum;
    return 0;
}