#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<utility>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";

}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}
int main() {
   node* root = new node(10);
   node* a = new node(20);
   node* b= new node(30);
   node* c= new node(40);
   node* d = new node(90);
   node* e = new node(50);
   node* f = new node(60);
   node* g = new node(100);
   node* h = new node(70);
   node* i= new node(80);
   root->left=a;
   root->right=b;
   a->left=c;
   a->right=d;
   c->right=f;
   d->right=g;
   b->right=e;
   e->left=h;
   e->right=i;
   preorder(root);
   cout<<endl;
   postorder(root);
    cout<<endl;
    inorder(root);
}
