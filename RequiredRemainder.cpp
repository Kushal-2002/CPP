#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y,n; 
    for(int i=0;i<t;i++){
        cin>>x>>y>>n;
        int r=n%x;
        int ans=n+(y-r);
        if(ans>n){
            cout<<(ans-x)<<endl;
        }
        else if(ans==n){
            cout<<n<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}