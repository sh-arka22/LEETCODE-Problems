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
private:
    void kdown(TreeNode *node,int k, TreeNode *block,vector<int>&ans){
      if(node == nullptr or k<0 or node == block)
        return;
      if(k==0){
        ans.push_back(node->val);
        return;
      }
      kdown(node->left,k-1,block,ans);
      kdown(node->right,k-1,block,ans);
    }

    void nodeRootPath(TreeNode* node,int data, vector<TreeNode*>&ans){
    if(node == nullptr)
        return;
    if(node->val == data){
        ans.push_back(node);
        return;
    }
    if(ans.size()==0){
        nodeRootPath(node->left,data,ans);
    }
    if(ans.size()==0){
        nodeRootPath(node->right,data,ans);
    }
    if(ans.size()>0){
        ans.push_back(node);
    }
}
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      vector<TreeNode*>path;
      nodeRootPath(root,target->val,path);

      vector<int>ans;
      TreeNode *block = nullptr;
      for(int i=0;i<path.size();i++){
        kdown(path[i],k-i,block,ans);
        block = path[i];
      }
      return ans;
    }
};