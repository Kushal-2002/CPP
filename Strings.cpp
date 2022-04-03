#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // string str;
    // string str="Kushal";
    // cout<<str;
    // cin>>str;
    // cout<<str;
    // string str1(5,'n');
    // cout<<str1<<endl;
    // string str;
    // getline(cin,str);
    // cout<<str;
    // string s1="fam";
    // string s2="ily";
    // s1.append(s2);
    // s1=s1+s2;
    // cout<<s1[1]<<endl;
    // string abc="Kushal is a good boy";
    // abc.clear();
    // cout<<abc<<endl;
    // string s1="xyz";
    // string s2="abc";
    // cout<<s2.compare(s1)<<endl;
    // string s1="abc";
    // cout<<s1<<endl;
    // s1.clear();
    // if(s1.empty()){
    //     cout<<"String is empty"<<endl;
    // }
    // string s1 = "nincompoop";
    // // s1.insert(2,"lol");
    // // cout << s1.size()<< endl;
    // for(int i=0;i<s1.length();i++){
    //     cout<<s1[i]<<endl;
    // }
    // string s1 = "nincompoop";
    // cout<<s1.substr(6,4)<<endl;
    // string s1="786";
    // int x=stoi(s1);
    // cout<< x+2 << endl;
    // int x=786;
    // cout<< to_string(x)+"2" <<endl;
    string s1="njnfvnnjsadfjueaijncnn";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}