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
node* input(){
    int rt;
    cin>>rt;
    node* root;
    if(rt==-1){
        root=NULL;
    }
    else{
        root=new node(rt);
    }
    queue<node*>q;

    if(root){
        q.push(root);
    }
    while(!q.empty()) {
        node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node*left1;
        node* right1;
        if(l==-1){
            left1=NULL;
        }
        else{
            left1=new node(l);
        }
        if(r==-1){
            right1=NULL;
        }
        else{
            right1=new node(r);
        }
        p->left=left1;
        p->right=right1;
    if (left1)
    {
        q.push(p->left);
    }
    if (right1)
    {
        q.push(p->right);
    }
    }
return root;
}
void level_order(node* root){
    if(root==NULL){
        cout<<"tree nai";
    }
    else{
    queue<node*>q;
    q.push(root);
    while(!q.empty()) {
        node* p=q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }

    }


    }

}


int main() {
    node* root=input();
   level_order(root);

}
