#include <iostream>
using namespace std;

int main() {
	int t,x,y,k;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>k;
        int p=x%k;
        int q=y%k;
        if(p==0 && q==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
