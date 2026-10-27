#include <iostream>
using namespace std;
class Node
{ // this is a tree node
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> inorderTraversal(Node*root){
    vector<int>ans;
  Node*curr=root;
  while(curr!=NULL){
    if(curr->left!=NULL){ // find the pred
     Node*pred=curr->left;
     while(pred->right!=NULL&&pred->right!=curr) pred=pred->right;
     if(pred->right==NULL){ // link
        pred->right=curr;
        curr=curr->left;
     }
     else{ // pred->right==curr:unlink
       pred->right=NULL;
        ans.push_back(curr->val);
      curr=curr->right;

     }
    }
    else{ // curr->left==NULL
      ans.push_back(curr->val);
      curr=curr->right;
    }
  }
  return ans;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(5);
    Node *c = new Node(15);
    Node *d = new Node(3);
    Node *e = new Node(8);
    Node *f = new Node(20);
    Node *g = new Node(6);
    Node *h = new Node(18);
    a->left=b;
    a->right=c;
    c->right=f;
    f->left=h;
    b->left=d;
    b->right=e;
    e->left=g;
     vector<int>ans=inorderTraversal(a);
     for (int x : ans)
{
    cout << x << " ";
}



}