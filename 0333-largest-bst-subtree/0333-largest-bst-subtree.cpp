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
    array<int, 3>dfs(TreeNode* root){
        if(!root) return {(int)1e9, (int)-1e9, 0};
        auto [left_min, left_max, leftSub] = dfs(root->left);
        auto [right_min, right_max, rightSub] = dfs(root->right);
        if(root->val>left_max and root->val<right_min){
            return {min(left_min, root->val), max(root->val, right_max), leftSub + rightSub + 1};
        }
        return {(int)-1e9, (int)1e9, max(leftSub, rightSub)};
    }
public:
    int largestBSTSubtree(TreeNode* root) {
        auto arr = dfs(root);
        return arr[2];
    }
};