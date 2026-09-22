 #include <iostream>
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
void display(Node *head)
{
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node *head){
     Node * temp = head;
     int n=0;
    while (temp != NULL)
    {
       n++;
        temp = temp->next;
    }
   return n;
}
void displayrec(Node*head){
    if(head==NULL) return;
    cout<<head->val;
    displayrec(head->next);
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e=  new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    cout<<a->next->val;// will print b
    cout<<a->next->next->val;// will print c
    // printing linked list
    Node*temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
     displayrec(a);
     display(a);
     cout<<size(a);
}
