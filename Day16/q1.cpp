//Write a C++ program to implement a Binary Tree using classes and display all nodes using recursion.

#include<iostream>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};
class Tree{
public:
    TreeNode* root;
    Tree(){
        root=NULL;
    }
    void display(TreeNode* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<endl;
        display(root->left);
        display(root->right);
    }
};
int main(){
    Tree t;
    t.root=new TreeNode(1);
    t.root->left=new TreeNode(2);
    t.root->right=new TreeNode(3);
    t.root->left->left=new TreeNode(4);
    t.root->left->right=new TreeNode(5);
    cout<<"Tree elements are:"<<endl;
    t.display(t.root);
    return 0;
}
