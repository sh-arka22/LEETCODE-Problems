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
    deque<int> dq;
    void helper(TreeNode* node, double target, int k) {
        if (!node) return;
        helper(node->left, target, k);
        
        dq.push_back(node->val);
        if (dq.size() > k) {
            if (abs(dq.front()-target) > abs(dq.back()-target))
                dq.pop_front();
            else
                dq.pop_back();
        }
        helper(node->right, target, k);
    }
public:
    vector<int> closestKValues(TreeNode* root, double target, int k) {
        helper(root, target, k);
        return vector<int>(dq.begin(), dq.end());
    }
};