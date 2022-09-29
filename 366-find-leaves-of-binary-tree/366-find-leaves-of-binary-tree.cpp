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
    int dfs(TreeNode* root, vector<vector<int>>&ans){
        if(root==NULL) return 0;
        int height = max(dfs(root->left, ans), dfs(root->right, ans))+1;
        if(height>ans.size()) ans.push_back({});
        ans[height-1].push_back(root->val);
        return height;
    }
public:
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>>ans;
        int res = dfs(root, ans);
        return ans;
    }
};