#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="aaabbcddaabffg";
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(st.size()==0) st.push(s[i]);
        else if(st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    string ans="";
    while(st.size()!=0){
        ans+=st.top();
        st.pop();

    }
   for(int i=ans.length()-1;i>=0;i--){
    cout<<ans[i];
   }

}