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
    bool isLeaf(TreeNode* root){
        return root->left == NULL and root->right == NULL;
    }
    void leftBoundary(TreeNode* root, vector<int>&res){
        TreeNode* curr = root->left;
        while(curr){
            if(!isLeaf(curr)) res.push_back(curr->val);
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    void rightBoundary(TreeNode* root, vector<int>&res){
        TreeNode* curr = root->right;
        vector<int>tmp;
        while(curr){
            if(!isLeaf(curr)) tmp.push_back(curr->val);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        
        for(int i = tmp.size()-1;i>=0;i--){
            res.push_back(tmp[i]);
        }
    }
    void addLeaf(TreeNode* root, vector<int>&res){
        TreeNode* curr = root;
        if(isLeaf(curr)) res.push_back(curr->val);
        if(curr->left) addLeaf(curr->left, res);
        if(curr->right) addLeaf(curr->right,res);
    }
public:
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        vector<int>res;
        if(!isLeaf(root)) res.push_back(root->val);
        leftBoundary(root, res);
        addLeaf(root,res);
        rightBoundary(root,res);
        
        return res;
    }
};