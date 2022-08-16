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
    vector<vector<int>>ans;
    int dfs(TreeNode* root){
        if(!root) return 0;
        int height = max(dfs(root->left), dfs(root->right))+1;
        if(height > ans.size()) ans.push_back({});
        ans[height-1].push_back(root->val);
        return height;
    }
    vector<vector<int>> findLeaves(TreeNode* root) {
        int height = dfs(root);
        cout<<height;
        return ans;
    }
};