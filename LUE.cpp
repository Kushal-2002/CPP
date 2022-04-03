#include <iostream>
using namespace std;
int main(){
    int n;
    for(;;){
        cin>>n;
        if(n!=42){
            cout<<n<<endl;
        }
        else{
            break;
        }
    }
}