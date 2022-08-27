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
        
        TreeNode* ans = NULL;
        TreeNode* curr = root;
        
        while(curr){
            if(curr->val > p->val){
                ans = curr;
                curr = curr->left;
            }
            else {
                curr = curr->right;
            }
        }
        return ans;
    }
};