/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool flag(TreeNode *root, int tar, vector<TreeNode *> &ans)
    {
        if (!root)
            return 0;
        if (root->val == tar)
        {
            ans.push_back(root);
            return true;
        }
        if (flag(root->left, tar, ans))
        {
            ans.push_back(root);
            return 1;
        }
        if (flag(root->right, tar, ans))
        {
            ans.push_back(root);
            return 1;
        }
        return flag(root->left, tar, ans) or flag(root->right, tar, ans);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode *> list1, list2;
        flag(root,p->val,list1);
        flag(root,q->val,list2);
        
        int i = list1.size()-1;
        int j = list2.size()-1;
        TreeNode* LCA = nullptr;
        while(i>=0 and j>=0){
            if(list1[i] != list2[j]){
                break;
            }
            LCA = list1[i];
            i--;
            j--;
        }
        return LCA;
    }
};