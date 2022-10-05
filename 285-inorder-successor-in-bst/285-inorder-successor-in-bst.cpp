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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if(!root) return NULL;
        TreeNode* ceil = NULL;
        TreeNode* floor = NULL;
        
        while(root){
            if(root->val<=p->val){
                floor = root;
                root = root->right;
            }
            else{
                ceil = root;
                root = root->left;
            }
        }
        return ceil;
    }
};