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
    int height(TreeNode* node){
        if(!node) return 0;
        int lt = height(node->left);
        if(lt==-1) return -1;
        int rt = height(node->right);
        if(rt==-1) return -1;
        if(abs(lt-rt)>1) return -1;
        return max(lt,rt)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return 1;
        return height(root) == -1 ? 0 : height(root);
    }
};