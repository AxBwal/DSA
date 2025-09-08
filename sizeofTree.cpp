#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

int displaySize(Node* root){
    if(root==NULL){
        return 0;
    }

    int size=0;

  int leftsize=displaySize(root->left);
  int rightsize=displaySize(root->right);

  size= leftsize + rightsize + 1;

    return size;

}


int main (){

    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(50);
    Node* e=new Node(60);
    Node* f=new Node(70);
    Node* g=new Node(80);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    int ans = displaySize(a);
    cout<<" the size  of tree is "<< ans << endl;



}