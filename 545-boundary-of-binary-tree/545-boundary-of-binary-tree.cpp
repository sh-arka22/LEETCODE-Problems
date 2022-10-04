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
    void leftBoundary(TreeNode* root, vector<int>&res){
        TreeNode* curr = root->left;
        while(curr){
            if(curr->left == NULL and curr->right == NULL) return;
            res.push_back(curr->val);
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    void addLeaf(TreeNode* root, vector<int>&res){
        if(!root) return;
        if(root->left == NULL and root->right == NULL)
            res.push_back(root->val);
        addLeaf(root->left, res);
        addLeaf(root->right, res);
    }
    void rightBoundary(TreeNode* root, vector<int>&res){
        vector<int>tmp;
        TreeNode* curr = root->right;
        while(curr){
            if(curr->left == NULL and curr->right == NULL) break;
            tmp.push_back(curr->val);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        for(int i=tmp.size()-1;i>=0;i--){
            res.push_back(tmp[i]);
        }
    }
public:
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        if(!root) return {};
        vector<int>res;
        res.push_back(root->val);
        if(root->left==NULL and root->right==NULL) return res;
        leftBoundary(root, res);
        addLeaf(root, res);
        rightBoundary(root, res);
        return res;
    }
};