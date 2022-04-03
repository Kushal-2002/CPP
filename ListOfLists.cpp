#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
 
    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}
 
// driver program
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int max=0,c=0;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
           
        }
        int n1 = sizeof(arr) / sizeof(arr[0]);
        int k=mostFrequent(arr, n1);
        for(int j=0;j<n;j++){
            if(arr[j]==k){
                c++;
            }
        }
        if(n==1 || c==n){
            cout<<0<<endl;
        }
        else if(c==1){
            cout<<-1<<endl;
        }
        
        else
        cout<<n-c+1<<endl;
    }
    return 0;
}