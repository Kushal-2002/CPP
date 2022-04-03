#include<iostream>
#include<string>
using namespace std;
void reverse(string str,int i){
    if(i<0){
        return;
    }
    cout<<str[i];
    reverse(str,i-1);
}
int main(){
    reverse("binod",4);
    return 0;
}