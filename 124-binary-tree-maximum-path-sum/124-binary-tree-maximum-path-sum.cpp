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
    int maxi = -(int)1e9;
    int sum(TreeNode* root){
        if(!root) return 0;
        int l_max = max(0,sum(root->left));
        int r_max = max(0,sum(root->right));
        maxi = max(maxi, l_max+r_max+root->val);
        return max(l_max,r_max)+root->val;
    }
public:
    
    int maxPathSum(TreeNode* root) {
        int call = sum(root);
        return maxi;
    }
};