#include <iostream>
#include <queue>
using namespace std;
void display(queue<int>q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x= q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
}
void removeateven(queue<int>&q){
    int index=0;
    int n=q.size();
    for(int i=1;i<=n;i++){
        
    if(index%2!=0){
        int x= q.front();
        q.pop();
        q.push(x);
        
    } else{
        q.pop();
    } index++;
}
}
int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout<<endl;
    removeateven(q);
    display(q);

}