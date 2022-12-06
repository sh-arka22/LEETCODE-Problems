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
    TreeNode* construct(vector<int>& preorder, int psi, int pei, 
                    vector<int>& postorder, int posi, int poei){
        if(psi>pei) return NULL;
        
        TreeNode* root = new TreeNode(preorder[psi]);
        if(psi==pei){
            return root;
        }
        int idx = posi;
        while(postorder[idx] != preorder[psi+1]) idx++;
        
        int tnel = idx-posi+1;
        
        root->left = construct(preorder, psi+1, psi+tnel, postorder, posi, idx);
        root->right = construct(preorder, psi+tnel+1, pei, postorder, idx+1, poei-1);
        
        return root;
    }
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        return construct(preorder, 0, preorder.size()-1, postorder, 0, size(postorder)-1);
    }
};