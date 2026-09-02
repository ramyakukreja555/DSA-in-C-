#include<iostream>
#include<vector>
using namespace std;
class Queue{
   public:
   int f;
   int b;
   int s;
   int c;
   vector<int>arr;
   Queue(int val){
      f=0;
      b=0;
      s=0;
      c=val;
      vector<int>v(val);
      arr=v;
   }
   void push(int val){
      if(s==c){
        cout<<"Queue is full"<<endl;
        return ;
      }
       arr[b]=val;
       b++;
       if(b==c) b=0;
       s++;
   }
   void pop(){
    if(s==0){
        cout<<"Queue is empty"<<endl;
        return;
    }
    f++;
    if(f==c) f=0;
    s--;
   }
   int front(){
    if(s==0){
        cout<<"queue is empty"<<endl;
        return ;
    }
     return arr[f];
   }
   int back(){
    if(s==0){
        cout<<"queue is empty"<<endl;
        return -1;
    }
    if(b==0) return arr[c-1];
    return arr[b-1];
   }
   int size(){
    return s;
   }
   bool empty(){
     if(s==0) return true;
     else return false;
   }
   void display(){
    int i=f;
     for(int j=0;j<s;j++){
        cout<<arr[i]<<" ";
        i++;
        if(i==c)i=0;
     }
     cout<<endl;
   }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}

