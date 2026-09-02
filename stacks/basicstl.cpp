#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> st;
    cout << st.size() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    // cout<<st(will not print full stack like this..give error..but not give error in java will print full stack)
    // while(st.size()>0){ // emptying the stack
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // we will use extra stack
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x= st.top();
        st.pop();
        temp.push(x);
 }
 // putting elements back from temp to stack
 while(temp.size()>0){
    int x=temp.top();
    temp.pop();
    st.push(x);
 }

}