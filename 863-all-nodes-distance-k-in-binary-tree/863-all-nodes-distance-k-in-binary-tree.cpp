/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool pathNode(TreeNode* root, TreeNode* tar, vector<TreeNode*>&ans){
        if(!root) return false;
        if(root==tar){
            ans.push_back(tar);
            return 1;
        }
        if(pathNode(root->left, tar, ans)){
            ans.push_back(root);
            return 1;
        }
        if(pathNode(root->right, tar, ans)){
            ans.push_back(root);
            return 1;
        }
        return pathNode(root->left,tar,ans) or pathNode(root->right,tar,ans);
    }
    void kdown(TreeNode* root, int k, TreeNode* block, vector<int>&ans){
        if(!root or root==block or k<0) return;
        if(k==0) ans.push_back(root->val);
        kdown(root->left, k-1, block, ans);
        kdown(root->right, k-1, block, ans);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<TreeNode*>nodes;
        bool call = pathNode(root, target, nodes);
        vector<int>ans;
        int i = 0;
        TreeNode* block = NULL;
        for(auto node:nodes){
            kdown(node,k-i,block,ans);
            i++;
            block = node;
        }
        return ans;
    }
};