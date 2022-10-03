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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        deque<TreeNode*>que;
        que.push_back(root);
        int rad = 0;
        vector<vector<int>>ans;
        while(que.size()){
            int sz = que.size();
            vector<int>sAns;
            while(sz--){
                TreeNode* top = que.front();
                sAns.push_back(top->val);
                que.pop_front();
                if(top->left) que.push_back(top->left);
                if(top->right) que.push_back(top->right);
            }
            if(rad%2) reverse(begin(sAns), end(sAns));
            ans.push_back(sAns);
            rad++;
        }
        return ans;
    }
};