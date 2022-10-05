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
    int kthSmallest(TreeNode* root, int &k) {
        if(!root) return -1;
        int lt = kthSmallest(root->left, k);
        if(lt!=-1) return lt;
        if(--k==0) return root->val;
        int rt = kthSmallest(root->right,k);
        if(rt!=-1) return rt;
        return -1;
    }
};