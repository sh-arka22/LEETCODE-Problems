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
    TreeNode* dfs(TreeNode* root) { // returns a pointer to the last node after flattening
        if (!root || (!root->left && !root->right)) return root;
        auto leftLast = dfs(root->left), rightLast = dfs(root->right), left = root->left, right = root->right;
        root->left = nullptr;
        root->right = left ? left : right;
        if (left) leftLast->right = right;
        return right ? rightLast : leftLast;
    }
public:
    void flatten(TreeNode* root) {
        root= dfs(root);
    }
};