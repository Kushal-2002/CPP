#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;
}
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];
        int max=INT16_MIN;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]>max){
                max=arr[j];
            }
        }
        int k=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k);
        int ans=mostFrequent(arr,k);
        cout<<ans<<endl;

    }
}