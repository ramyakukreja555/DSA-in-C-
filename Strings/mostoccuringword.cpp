#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s="raghav is a maths teacher . he is a dsa mentor as well";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // vector print
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
sort(v.begin(),v.end());
int maxcount=0;
int count=1;
for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1]) count++;else count=1;
     maxcount =max(count,maxcount);
}
 count=1;
for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1]) count++;else count=1;
     if(maxcount==count){
        cout<<v[i]<<" "<<maxcount<<endl;
     }
}

}