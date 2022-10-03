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
    int height(TreeNode* root) {
        if(!root) return 0;
        return max(height(root->left) ,height(root->right))+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return 1;
        int l_ht = height(root->left);
        int r_ht = height(root->right);
        cout<<root->val<<"->"<<l_ht<<" "<<r_ht<<endl;
        if(abs(l_ht-r_ht)>1) return 0;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        return (left and right);
    }
};