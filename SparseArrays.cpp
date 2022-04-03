#include <iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    string strings[n];
    
    for(int i=0;i<n;i++ ){
        cin>>strings[i];
    }
    cin>>q;
    string queries[q];
    int count[q];
    for(int i=0;i<q;i++ ){
        cin>>queries[i];
    }
    for(int i=0;i<q;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            if(strings[i]==queries[j]){
                count[j]++;
            }
        }
    }
    for(int i=0;i<q;i++ ){
        cout<<count[i]<<" ";
    }
    return 0;
}