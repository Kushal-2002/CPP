#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int j=0;
    int c=0;
    int my_money=0,his_money=0  ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    while(my_money<=his_money){
        my_money+=arr[j];
        his_money=sum-my_money;
        c++;
        j++;
  
    }
    cout<<c<<endl;
    return 0;
}