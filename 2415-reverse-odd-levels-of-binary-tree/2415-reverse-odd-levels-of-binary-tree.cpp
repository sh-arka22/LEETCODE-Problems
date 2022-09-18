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
    void reverse(TreeNode* leftTree, TreeNode* rightTree, int level){
        if(leftTree == NULL) return;
        if(level % 2 == 0) swap(leftTree->val, rightTree->val);
        reverse(leftTree->left, rightTree->right, level+1);
        reverse(leftTree->right, rightTree->left, level+1);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        reverse(root->left, root->right, 2);
        return root;
    }
};