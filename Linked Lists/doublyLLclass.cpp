#include<iostream>
using namespace std;
class Node
{ 
public:
    int val;
    Node * next;
    Node*prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};
class DLL{ // user defined data structure
    public:
    Node*head;
    Node*tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;

        }
        size++;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }
    void insertatbeginning(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
         
        } else{
            temp->next=head;
            head->prev=temp;
            head=temp;
            
        }
        size++;
    }
    void insertatindex(int idx,int val){
       
        if(idx<0||idx>size){
            cout<<"invalid index"<<endl;
            
        }
        else if(idx==0) {
            insertatbeginning(val);
            
        }
        else if(idx==size) {
            insertatend(val);
           
        }
        else{
            Node *t=new Node(val);
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;

            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;

        }

    }
    int getatindex(int idx){
        if(idx<0||idx>=0){
            cout<<"invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node*temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
            }
            else{ // idx>size/2
              Node*temp=tail;
              for(int i=1;i<size-idx;i++){
                temp=temp->prev;
              }
              return temp->val;
            }
        }
    }
    void deleteathead(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        
        head=head->next;
        if(head!=NULL)head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"list is empty";
            return ;
        }
        else if(size==1){
            deleteathead();
            return;
        }
        Node*temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteatindex(int idx){
        if(size==0){
            cout<<"list is empty";
            return ;
        }
        else if(idx<0||idx>=size){
            cout<<"invalid index";
            return;
         }
         else if(idx==0) deleteathead();
         else if(idx==size-1) deleteattail();
         else{
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;

            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
         }

    }
};
int main(){
    DLL list;
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);
    list.display();
    list.insertatend(40);
    list.display();
    list.insertatbeginning(50);
    list.insertatindex(2,60);
    list.deleteattail();
    list.display();




}