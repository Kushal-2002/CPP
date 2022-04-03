#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, str;
    getline(cin, s);
    int flag;
    int c=0;
    for (int j = 65; j <= 90; j++)
    {

        for (int i = 0; i < s.length(); i++)
        {
            int str=int(toupper(s[i]));
            if(str==j){
                c++;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    
    if(c==26){
        cout<<"pangram";
    }
    else{
        cout<<"not pangram";
    }
    
    return 0;
}