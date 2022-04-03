#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n];
        long long s=0;
        long long min=LONG_MAX;
        int mini;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s+=arr[i];
            if(arr[i]<min){
                min=arr[i];
                mini=i;
            }
        }
        int x=(int)((log10(s)/log10(2))+1);
        int x1=(int)((log10(s)/log10(2))+1);
        double x2=(double)((log10(s)/log10(2)));
    
        if(x1==x2){
            cout<<0<<endl;
            break;
        }
        long long p=(long long)(pow(2,x)+.5);
        long long z=(p-s+min)/min;
        int k=(int)((log10(min)/log10(2)));
        int f=x-k;
        int y=(int)(pow(2,f)+.5);
        cout<<1<<endl;
        cout<<1<<" "<<z<<endl;
        cout<<mini+1<<endl;
    }
    return 0;
}