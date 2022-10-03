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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)  return {};
        vector<int>ans;
        deque<TreeNode*>stack;
        stack.push_back(root);
        
        while(stack.size()){
            int sz = stack.size();
            while(sz--){
                TreeNode* top = stack.back();
                stack.pop_back();
                ans.push_back(top->val);
                if(top->right) stack.push_back(top->right);
                if(top->left) stack.push_back(top->left);
            }
        }
        return ans;
    }
};