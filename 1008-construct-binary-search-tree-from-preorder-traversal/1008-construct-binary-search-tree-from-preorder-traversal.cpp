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
    TreeNode* constructor(vector<int>& pre, int si, int ei){
        if(si>ei) return NULL;
        TreeNode* root = new TreeNode(pre[si]);
        int lei = si+1;
        while(lei< size(pre) and pre[lei]<pre[si]) lei++;
        lei--;
        
        int rsi = lei+1;
        root->left = constructor(pre, si+1, lei);
        root->right = constructor(pre, rsi, ei);
        
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return constructor(preorder, 0, size(preorder)-1);
    }
};