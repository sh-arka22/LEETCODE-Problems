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
    void dfs(TreeNode* root, vector<int>&res){
        if(!root) return;
        dfs(root->left, res);
        res.push_back(root->val);
        dfs(root->right, res);
    }
public:
    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        vector<int>nodeList1, nodeList2;
        dfs(root1, nodeList1);
        dfs(root2, nodeList2);
        int n = size(nodeList1), m = size(nodeList2);
        int i=0, j=m-1;
        while(i<n and j>=0){
            int sum = nodeList1[i] + nodeList2[j];
            if(sum<target){
                i++;
            }
            else if(sum>target){
                j--;
            }
            else return true;
        }
        return false;
    }
};