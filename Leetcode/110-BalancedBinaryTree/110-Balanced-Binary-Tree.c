/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int altura(struct TreeNode* r) {
    if(!r) 
        return 0;
        
    int e = altura(r->left), d = altura(r->right);
    return (e>d?e:d)+1;
}

bool isBalanced(struct TreeNode* root) {
    if(!root) 
        return true;

    int e = altura(root->left), d = altura(root->right);
    return !(e-d>1 || d-e>1) && isBalanced(root->left) && isBalanced(root->right);
}