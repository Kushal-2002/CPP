#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;

    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Enter an operator"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
        cout<<"enter another number"<<endl;
        break;
    }
    return 0;
}