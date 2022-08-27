/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* dfs(TreeNode *rootLeft, TreeNode* root, TreeNode* rootRight){
        if(!rootLeft) return root;
        TreeNode* rootLeftLeft = rootLeft->left, *rootLeftRight = rootLeft->right;
        rootLeft->right = root;
        rootLeft->left = rootRight;
        return dfs(rootLeftLeft, rootLeft, rootLeftRight);
    }
public:
    TreeNode* upsideDownBinaryTree(TreeNode* root) {
        if(!root or !root->left) return root;
        TreeNode* rootLeft = root->left;
        TreeNode* rootRight = root->right;
        root->left = root->right = NULL;
        return dfs(rootLeft, root, rootRight);
    }
};