#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min=INT16_MAX;
    int mini=0;
    int max=INT16_MIN;
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min){
            min=arr[i];
            mini=i;
        }
        if(arr[i]==min){
            if(i>mini){
                min=arr[i];
                mini=i;
            }
        }
        
    }
    for(int i=mini;i<n-1;i++){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxi=i;
        }
    }
    cout<<(n-mini-1)+(maxi)<<endl;
    return 0;
}