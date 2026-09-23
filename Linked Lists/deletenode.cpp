#include<iostream>
using namespace std;
class Node{ // linked list node
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;//initializing everyone's next from null address firstly instead of any garbage value
    }
    

};
void display(Node *head)
{
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }
}
Node* deletenode(Node*head,Node* target){

    Node*temp=target;
    if(head==target){
        head=head->next;
        return head;
    }
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node*e= new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next=e;
    Node*head=a;
    display(head);
   head=deletenode(head,d);
   display(head);
    
}