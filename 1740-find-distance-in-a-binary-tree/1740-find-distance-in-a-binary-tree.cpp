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
    TreeNode* LCA(TreeNode* root, int p, int q){
        if(!root or root->val == p or root->val == q) return root;
        TreeNode* leftLca = LCA(root->left, p, q);
        TreeNode* rightLca = LCA(root->right, p, q);
        
        if(leftLca and rightLca) return root;
        if(leftLca) return leftLca;
        if(rightLca) return rightLca;
        
        return nullptr;
    }
    int distance(TreeNode* root, int target, int travel) {
        if(root == nullptr) {
            return -1;
        }
        
        if(root->val == target) {
            return travel;
        }
        
        int travelLeft = distance(root->left, target, travel + 1);
        if(travelLeft == -1) {
            return distance(root->right, target, travel + 1);
        }
        
        return travelLeft;
    }
public:
    int findDistance(TreeNode* root, int p, int q) {
        TreeNode* lca = LCA(root, p, q);
        return (distance(lca, p,0) + distance(lca, q,0));
    }
};