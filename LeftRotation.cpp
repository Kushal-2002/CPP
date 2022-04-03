#include <iostream>
using namespace std;
int main()
{
    int n,d,j;
    cin>>n>>d;
    int arr[n],a[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        j=i-d;
        if(j<0){
            a[j+n]=arr[(i)];
        }
        else{

        a[j]=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}