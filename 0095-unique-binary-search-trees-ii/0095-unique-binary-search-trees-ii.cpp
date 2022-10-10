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
    vector<TreeNode*> recc(int start, int end){
        if(end<start) return {NULL};
        vector<TreeNode*> list;
        for(int i=start;i<=end;i++){
            vector<TreeNode*>leftPart = recc(start, i-1);
            vector<TreeNode*>rightPart = recc(i+1, end);
            for(auto l:leftPart){
                for(auto r:rightPart){
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    list.push_back(root);
                }
            }
        }
        return list;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        return recc(1,n);
    }
};