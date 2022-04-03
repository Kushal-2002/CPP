#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    int c=0,d=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            c++;
        }
        else{
            d++;
        }
    }
    if(c>d){
        cout<<"Anton"<<endl;
    }
    else if(c<d){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}