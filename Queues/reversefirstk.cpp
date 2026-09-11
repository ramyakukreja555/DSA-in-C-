#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x= q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
}
void reverse(queue<int>&q,int k){
    stack<int>st;
    int n=q.size();
    for(int i=0;i<k;i++){
           int x= q.front();
           st.push(x);
           q.pop();
    }
    while(st.size()>0){
        int x= st.top();
        q.push(x);
        st.pop();
    }
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    int k;
    cin>>k;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q,k);
    display(q);

}