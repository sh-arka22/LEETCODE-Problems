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
    map<int,vector<int>>mp;
    vector<vector<int>> verticalOrder(TreeNode* root) {
        if(root == NULL)
            return{};
        vector<vector<int>>ans;
        queue<pair<TreeNode*,int>>que;
        
        que.push({root,0});
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto curr = que.front();
                int x = curr.second;
                mp[x].push_back(curr.first->val);
                que.pop();
                if(curr.first->left != NULL){
                    que.push({curr.first->left,curr.second-1});
                }
                if(curr.first->right != NULL){
                    que.push({curr.first->right,curr.second+1});
                }
            }
        }
        
        for(auto v:mp){
            vector<int>sAns;
            for(auto vv:v.second){
                sAns.push_back(vv);
            }
            ans.push_back(sAns);
        }
        return ans;
    }
};