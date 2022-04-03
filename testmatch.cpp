#include <iostream>
using namespace std;
int main()
{
    int t, n, s, A, B, C,D,E;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int c=0,d=0,e=0;
        for(int j=1;j<=5;j++){
            cin>>n;
            
            if(n==0){
                d++;
            }
            if(n==1){
                c++;
            }
            if(n==2){
                e++;
            }
        }
        if(c>e){
            cout<<"INDIA"<<endl;
        }
        else if(c<e){
            cout<<"ENGLAND"<<endl;

        }
        else if(c==e){
            cout<<"DRAW"<<endl;
            
        }
    }
}