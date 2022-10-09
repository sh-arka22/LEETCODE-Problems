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
    int maxi = 0;
    int dfs(TreeNode* root){
        if(!root) return 0;
        int L = dfs(root->left);
        int R = dfs(root->right);
        if(root->left and root->val != root->left->val-1)
            L = 0;
        if(root->right and root->val != root->right->val-1)
            R = 0;
        int length = max(L, R)+1;
        maxi = max(maxi, length);
        return length;
    }
public:
    int longestConsecutive(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};