#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    if(s.length()!=t.length()) return 0;
    vector<int>v(150,1000);
    bool isomorphic=true;
    for(int i=0;i<s.length();i++){
        int idx=(int)s[i];
        if(v[idx]==1000)v[idx]=s[i]-t[i];
        else if(v[idx]!=(s[i]-t[i])) isomorphic=false;
    }
    for(int i=0;i<150;i++){
        v[i]=1000;
    }
    for(int i=0;i<s.length();i++){
        int idx=(int)t[i];
        if(v[idx]==1000)v[idx]=t[i]-s[i];
        else if(v[idx]!=(t[i]-s[i])) isomorphic=false;
    }
    if(isomorphic) cout<<"true";
    else cout<<"false";


}