

#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
    if (b ==  0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// Driver program to test above function
int main()
{
    long t;
    int a,b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        cout<<lcm(a,b)/b<<endl;
    }
}