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
    TreeNode* constructor(vector<int>& postorder, vector<int>& inorder,int postStart,int postEnd,int inStart,int inEnd) {
        if(inStart>inEnd)
            return nullptr;

        int idx = inStart;
        while(inorder[idx] != postorder[postEnd])
            idx++;

        int left = idx - inStart; // counts the total no of nodes in the left sub->tree

        TreeNode *node = new TreeNode(postorder[postEnd]);

        node->left = constructor(postorder, inorder, postStart, postStart+left-1, inStart, idx-1);
        node->right = constructor(postorder, inorder, postStart+left, postEnd-1, idx+1, inEnd);

        return node;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();

        return constructor(postorder,inorder,0,n-1,0,n-1);
    }
};