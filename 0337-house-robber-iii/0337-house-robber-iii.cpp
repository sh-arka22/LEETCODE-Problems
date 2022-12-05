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
class Pair{
 public:
    int ifRobbed = 0;
    int ifNotRobbed = 0;
};
class Solution {
private:
    Pair dfs(TreeNode* root){
        if(!root) return Pair();
        
        Pair left = dfs(root->left);
        Pair right = dfs(root->right);
        
        Pair myAns = Pair();
        myAns.ifRobbed = left.ifNotRobbed + root->val + right.ifNotRobbed;
        myAns.ifNotRobbed = max(left.ifNotRobbed, left.ifRobbed) + max(right.ifNotRobbed, right.ifRobbed);
        return myAns;
    }
public:
    int rob(TreeNode* root) {
        Pair ans = dfs(root);
        return max(ans.ifNotRobbed, ans.ifRobbed);
    }
};