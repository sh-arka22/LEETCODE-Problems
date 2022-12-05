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
    int cam = 0;
    string dfs(TreeNode* node){
        if(!node) return "covered";
        string left = dfs(node->left);
        string right = dfs(node->right);
        if(left == "notCovered" or right == "notCovered"){
            cam++;
            return "camera";
        }
        if(left == "camera" or right == "camera"){
            return "covered";
        }
        return "notCovered";
    }
public:
    int minCameraCover(TreeNode* root) {
        string res = dfs(root);
        if(res == "notCovered") cam++;
        return cam;
    }
};