#include<iostream>
#include<math.h>
using namespace std;
bool isArmstrong(int num){
    int originaln=num;
    int sum=0;
    while(num>0){
        int lastdigit=num%10;
        sum=sum + lastdigit*lastdigit*lastdigit;
        num=num/10;
    }
    if(sum==originaln){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int sum=0;
    int n,lastdigit=0;
    for(int i=1;i<=1000000;i++){

    if(isArmstrong(i)){
        cout<<i<<endl;
    };
    }
    
    

    return 0;
}