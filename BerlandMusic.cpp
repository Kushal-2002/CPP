#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
    vector<int> ones;
    vector<int> zeroes;
        cin>>n;
        int p[n];
        int map[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
            map[p[i]]=i;
        }
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                ones.push_back(p[i]);
            }else{
                zeroes.push_back(p[i]);
            }
        }
        int c=n;
        
        sort(ones.begin(),ones.end(),greater<int>());
        sort(zeroes.begin(),zeroes.end(),greater<int>());
        int q[n];
        for(int i=0;i<ones.size();i++){
            q[map[ones[i]]]=c;
            c--;
        }
        for(int i=0;i<zeroes.size();i++){
            q[map[zeroes[i]]]=c;
            c--;
        }
        for(int i=0;i<n;i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
    return 0;  
}