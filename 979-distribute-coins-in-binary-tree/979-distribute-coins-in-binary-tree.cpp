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
    int dfs(TreeNode* root, int &cnt){
        if(!root) return 0;
        int left = dfs(root->left,cnt);
        int right = dfs(root->right,cnt);
        cnt += (abs(left) + abs(right));
        return left + right + root->val -1;
    }
    int distributeCoins(TreeNode* root) {
        int cnt = 0;
        dfs(root,cnt);
        return cnt;
    }
};