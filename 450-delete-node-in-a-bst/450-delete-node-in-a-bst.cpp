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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return NULL;
        if (root->val < key) {
            root->right = deleteNode(root->right, key);
            return root;
        } 
        else if (root->val > key) {
            root->left = deleteNode(root->left, key);
            return root;
        }
        if (!root->left || !root->right) return root->left ? root->left : root->right;
        auto newRoot = root->right, left = newRoot->left, node = root->left;
        newRoot->left = root->left;
        while (node->right) node = node->right;
        node->right = left;
        return newRoot;
    }
};