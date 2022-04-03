#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter a char:";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"hi"<<endl;   
        break; 
    
    default:
        cout<<"sorry I dont know that";
        break;
    }
    return 0;
}