#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int s=0;
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<s1.length();i++){
        arr[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        arr[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        s+=abs(arr[i]);
    }
    cout<<s<<endl;
    return 0;
}