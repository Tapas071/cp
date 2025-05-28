#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val ;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x){
        val = x;
        this->left = nullptr;
        this ->right  = nullptr;
    }

};

void inOrderTraversal(TreeNode* root){
   
    if(root->left){
        inOrderTraversal(root->left);
    }
    cout << root->val << " ";
    if(root->right){
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(TreeNode *root)
{
    cout << root->val << " ";
    if (root->left)
        preOrderTraversal(root->left);
    
    if (root->right)
        preOrderTraversal(root->right);
}

void postOrderTraversal(TreeNode *root)
{
    if (root->left)
        postOrderTraversal(root->left);

    if (root->right)
        postOrderTraversal(root->right);
    cout << root->val << " ";
}

int main(){

    TreeNode *t = new TreeNode(10); // heap memory allocation

    TreeNode* left_child = new TreeNode(5);
    TreeNode* right_child = new TreeNode(5);
    t->left = left_child;
    t->right = right_child;
    inOrderTraversal(t);

    // Tree t1 ; // stack memory allocation
    return 0;
}