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
    void inorder(TreeNode* root,vector<TreeNode*>&treeNodes, vector<int>&values){
        if(!root) return;
        inorder(root->left,treeNodes,values);
        treeNodes.push_back(root);
        values.push_back(root->val);
        inorder(root->right,treeNodes,values);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>treeNodes; vector<int>values;
        inorder(root,treeNodes,values);
        sort(begin(values), end(values));
        
        for(int i=0;i<values.size();i++){
            treeNodes[i]->val = values[i];
        }
    }
};