#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b;
    int k=a-b;
    int c=k%10;
    for(int i=1;i<=9;i++){
        if(i!=c){
            n=i;
            break;
        }
    }
    cout<<((k/10)*10)+n<<endl;
}