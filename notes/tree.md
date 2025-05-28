# Binary Tree

```cpp
// Define the structure for a tree node
struct TreeNode {
    int val;         // Data held by the node
    TreeNode* left;  // Pointer to the left child
    TreeNode* right; // Pointer to the right child

    // Constructor to easily create a new node
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

```

##  Traversal Algorithms

### inorderTraversal

```cpp
void inorderTraversal(TreeNode* root){
    cout<<root->val<<" ";
    if(root->left){
        inorderTraversal(root->left);
    }
    if(root->right){
        inorderTraversal(root->right);
    }
}
```
### preOrderTraversal

```cpp

void preOrderTraversal(TreeNode *root)
{
    cout << root->val << " ";
    if (root->left)
        preOrderTraversal(root->left);
    
    if (root->right)
        preOrderTraversal(root->right);
}
```
### postOrderTraversal

```cpp
void postOrderTraversal(TreeNode *root)
{
    if (root->left)
        postOrderTraversal(root->left);

    if (root->right)
        postOrderTraversal(root->right);
    cout << root->val << " ";
}
```




