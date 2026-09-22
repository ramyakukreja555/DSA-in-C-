#include<iostream>
using namespace std;
class Node
{ // linked list node
public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ // user defined data structure
    public:
    Node*head;
    Node*tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
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
            Node*temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteathead(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        
        head=head->next;
        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"list is empty";
            return ;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
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
            size--;
         }

    }
};
int main(){
    LinkedList ll ;
    ll.insertatend(10);//10->NULL
    ll.insertatend(20);//10->20->NULL
    ll.display();
    cout<<ll.size;
    ll.insertatbeginning(40);
    ll.display();
    ll.insertatindex(2,57);
    ll.display();
    cout<<ll.getatindex(2)<<endl; 
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
    ll.deleteatindex(3);
    ll.display();




}