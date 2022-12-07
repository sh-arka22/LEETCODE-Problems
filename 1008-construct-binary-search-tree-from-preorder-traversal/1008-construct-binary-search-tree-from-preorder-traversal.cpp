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
    int idx = 0;
    TreeNode* constructor(vector<int>&pre, int lr, int rr){
        if(idx>=size(pre) or pre[idx]<lr or pre[idx]>rr) return NULL;
        TreeNode* root = new TreeNode(pre[idx++]);
        root->left = constructor(pre, lr, pre[idx-1]);
        root->right = constructor(pre, pre[idx-1], rr);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = size(preorder);
        return constructor(preorder, -1e9, 1e9);
    }
};