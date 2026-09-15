#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string>v;
    
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    int n=v.size();
    sort(v.begin(),v.end());
    if(v.size()==1) cout<<v[0];
    string first=v[0];
    string last=v[n-1];
    string s="";
    for(int i=0;i<(min(first.size(),last.size()));i++){
        if(first[i]==last[i]){
            s+=first[i];
        }
        else break;
       
    }
    cout<<s;
}