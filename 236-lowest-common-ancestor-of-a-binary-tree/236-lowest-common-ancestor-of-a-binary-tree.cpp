/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root or root == p or root == q) return root;
        TreeNode* leftLca = dfs(root->left, p, q);
        TreeNode* rightLca = dfs(root->right, p, q);
        
        if(leftLca and rightLca) return root;
        if(leftLca) return leftLca;
        if(rightLca) return rightLca;
        
        return nullptr;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p, q);
    }
};