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
public:
    int cnt = 0;
    void dfs(TreeNode* root, int tar, long long curr){
        if(!root) return;
        if((long long)(curr+root->val) == tar) cnt++;
        dfs(root->left,tar,curr+root->val);
        dfs(root->right,tar,curr+root->val);
    }
    
    int pathSum(TreeNode* root, int tar) {
        if(!root) return 0;
        dfs(root,tar,0LL);
        pathSum(root->left, tar);
        pathSum(root->right, tar);
        return cnt;
    }
};