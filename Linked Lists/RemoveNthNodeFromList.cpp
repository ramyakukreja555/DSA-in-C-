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
Node*removenthfromend(Node*head,int n){
        int len=0;
        Node*temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n==len){
            head=head->next;
            return head;
        }
        // nth from end= (len-n+1)th from start
        int m=len-n+1;
        int idx=m-1;// the idx of node to be deleted
        temp=head;
        for(int i=1;i<=idx-1;i++){
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
    Node*newhead;
    newhead=removenthfromend(head,4);
    Node* temp = newhead;
while(temp != NULL){
    cout << temp->val << " ";
    temp = temp->next;
}
    
    
}