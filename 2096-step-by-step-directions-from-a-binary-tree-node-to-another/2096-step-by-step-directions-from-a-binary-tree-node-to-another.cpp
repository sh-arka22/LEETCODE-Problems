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
    int *parrent, *vis;
    char *dirArray;
    int countNodes(TreeNode* root){
        if(!root) return 0;
        int leftCount = countNodes(root->left);
        int rightCount = countNodes(root->right);
        return leftCount+rightCount+1;
    }
    void createGraph(TreeNode* root, vector<pair<int,char>>graph[]){
        if(!root) return;
        if(root->left){
            graph[root->val].push_back({root->left->val,'L'});
            graph[root->left->val].push_back({root->val, 'U'});
            createGraph(root->left, graph);
        }
        if(root->right){
            graph[root->val].push_back({root->right->val,'R'});
            graph[root->right->val].push_back({root->val, 'U'});
            createGraph(root->right, graph);
        }
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        int nodes = 0;
        nodes = countNodes(root);
        vector<pair<int,char>>graph[nodes+1];
        createGraph(root, graph);
        parrent = new int[nodes+1];
        vis = new int[nodes+1];
        fill(vis,vis+nodes+1,0);
        dirArray = new char[nodes+1];
        parrent[startValue] = -1;
        queue<int>que;
        que.push(startValue);
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int parr = que.front(); que.pop();
                if(parr == destValue) break;
                for(auto[child,dir]:graph[parr]){
                    if(vis[child]) continue;
                    vis[child] = 1;
                    dirArray[child] = dir;
                    parrent[child] = parr;
                    que.push(child);
                }
            }
        }
        
        string res = "";
        // for(auto it:parrent) cout<<it<<" ";
        for(int i=0;i<=nodes;i++){
            cout<<parrent[i]<<" ";
        }
        cout<<dirArray[destValue];
        while(parrent[destValue] != -1){
            res+=dirArray[destValue];
            destValue = parrent[destValue];
            if(destValue == startValue) break;
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};