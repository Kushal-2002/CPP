#include<iostream>
using namespace std;

int main()
{
    long long t=0;
    long long a=0,b=0;
    cin >> t;
    while(t--){
        cin>>a>>b;
        for(int i=1;i<=b;i++){
            if(a%2==0){
                a=a-(long long)i;
            }
            else
            a=a+(long long)i;
        }
        cout<<a<<endl;
    }
    return 0;
}