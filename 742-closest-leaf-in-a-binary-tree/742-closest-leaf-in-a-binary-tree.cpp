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
    unordered_map<TreeNode*,vector<TreeNode*>>graph;
    void buildGraph(TreeNode* root){
        if(!root) return;
        if(root->left){
            graph[root].push_back(root->left);
            graph[root->left].push_back(root);
            buildGraph(root->left);
        }
        if(root->right){
            graph[root].push_back(root->right);
            graph[root->right].push_back(root);
            buildGraph(root->right);
        }
    }
public:
    int findClosestLeaf(TreeNode* root, int k) {
        buildGraph(root);
        set<TreeNode*>seen;
        deque<TreeNode*>queue;
        for(auto [node, list]: graph){
            if(node and node->val==k){
                seen.insert(node);
                queue.push_back(node);
                break;
            }
        }
        while(queue.size()){
            int sz = queue.size();
            while(sz--){
                TreeNode* node = queue.front();
                queue.pop_front();
                if(!node->left and !node->right) return node->val;
                for(TreeNode* child:graph[node]){
                    if(seen.count(child)) continue;
                    seen.insert(child);
                    queue.push_back(child);
                }
            }
        }
        return root->val;
    }
};