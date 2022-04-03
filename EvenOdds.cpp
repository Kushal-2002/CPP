#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
  
   long long n,k,f;
   cin>>n>>k;
   long long x;
   double d=(double)n/2.0;
   d=ceil(d);
   f=(long long)d;
   if(k>d){
       x=2*(k-f);
   }else{
       x=2*k-1;
   }
   cout<<x<<endl;
    return 0;
}