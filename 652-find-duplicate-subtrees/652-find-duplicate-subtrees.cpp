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
    string serialize(TreeNode* root, unordered_map<string,vector<TreeNode*>>&mp){
        if(!root) return "";
        string s = "(" + serialize(root->left,mp) + to_string(root->val) + serialize(root->right,mp) + ")";
        mp[s].push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,vector<TreeNode*>>mp;
        serialize(root,mp);
        vector<TreeNode*>ans;
        for(auto &[str,list]:mp){
            if(list.size()>1)
                ans.push_back(list[0]);
        }
        return ans;
    }
};