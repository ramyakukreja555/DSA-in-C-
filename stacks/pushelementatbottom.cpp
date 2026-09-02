#include<iostream>
#include<stack>
using namespace std;// stack paases by value so use & in function
void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        
        int x= st.top();
        st.pop();
        temp.push(x);
 }
 while(temp.size()>0){
    cout<<temp.top()<<" ";
    st.push(temp.top());
    temp.pop();
   
 }
}
void pushatbottom(stack<int>&st,int val){
    stack<int>helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }

}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushatbottom(st,80);
    print(st);


}