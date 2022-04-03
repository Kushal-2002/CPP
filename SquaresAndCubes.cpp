#include <iostream>
#include <math.h> // For sqrt() and cbrt()
using namespace std;
 
// Function to count the number
// of perfect squares and cubes
int countSC(int N)
{
    int res = (int)sqrt(N) + (int)cbrt(N)
              - (int)(sqrt(cbrt(N)));
 
    return res;
}
 
// Driver code
int main()
{
    int N ;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

    cin>>N;
    cout<<countSC(N)<<endl;
    }
    
    return 0;
}