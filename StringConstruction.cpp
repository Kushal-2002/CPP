#include <iostream>
#include <string>
using namespace std;
int main()
{
    int q;
    cin >> q;
    string str;
    
    for (int i = 1; i <= q; i++)
    {
        cin >> str;
        int l=str.length();
        int arr[l];
        int c=0;

        for(int j=0;j<str.length();j++){
            arr[j]=0;
        }

        for(int j=0;j<str.length();j++){
            int s=(int)str[j];
            if(arr[s]==0){
                c++;
                arr[s]=1;
            }
        }
        cout<<c<<endl;
    }
}