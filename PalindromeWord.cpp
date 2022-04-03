#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int check=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=1;
        }
    }
    if(check==0){
        cout<<"Palidrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}