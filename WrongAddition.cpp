#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
    long long t,a,s,s1,a1,s2,k;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>s;
        long long f=0,c=0,flag=0;
        while(s>0 || a>0){
            s1=s%10;
            a1=a%10;
            if(s1<a1){
                s2=s%100;
                if(s2>=20){
                    flag=1;
                    break;
                }
                k=s2-a1;
                s=s/100;
            }
            else{
                k=s1-a1;
                s=s/10;
            }
            if(k<0)
            {
                flag=1;
                break;
            }
            f+=k*((long long)(pow(10,c)+.5));
            a=a/10;
            c++;
        }
        if(flag==1){
            cout<<-1<<endl;
        }
        else
        cout<<f<<endl;
    }
   
    return 0;
}