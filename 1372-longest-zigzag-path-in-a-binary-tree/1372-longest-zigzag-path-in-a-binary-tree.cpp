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
    int slopeUp = -1;
    int slopeDown = -1;
};
class Solution {
int maxLen = 0;
private:
    Pair dfs(TreeNode* root){
        if(!root) return Pair();
        Pair left = dfs(root->left);
        Pair right = dfs(root->right);
        Pair myAns = Pair();
        vector<int>v = {maxLen, left.slopeDown + 1, right.slopeUp + 1, left.slopeDown ,left.slopeUp, right.slopeUp, right.slopeDown};
        maxLen = *max_element(v.begin(), v.end());
        myAns.slopeUp = left.slopeDown + 1;
        myAns.slopeDown = right.slopeUp + 1;
        return myAns;
    }
public:
    int longestZigZag(TreeNode* root) {
        dfs(root);
        return maxLen;
    }
};