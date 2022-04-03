#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=INT16_MIN;
    int s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        s=s+(max-arr[i]);
    }
    cout<<s<<endl;
}