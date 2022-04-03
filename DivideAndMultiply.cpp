#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n,min1,max1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long arr[n];
        long long min = INT_MAX;
        long long max = INT_MIN;
        long long maxi=0;
        
        int k;
        int c=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            k=arr[i];
            

            while(k%2==0){
                k/=2;
                c++;
            }
            arr[i]=k;
            }
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                maxi=i;
            }
        }
        arr[maxi]=max*(long long)(pow(2,c)+.5);
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            s += arr[i];
        }
        cout << s << endl;
    }
    return 0;
}