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
class Pair{
public:
    int x,y;
    TreeNode* node;
    Pair(int x, int y, TreeNode* node){
        this->x=x;
        this->y=y;
        this->node=node;
    }
};
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};
        deque<Pair>que;
        map<int,map<int,multiset<int>>>mp;
        que.push_back(Pair(0,0,root));
        while(que.size()){
            int sz = que.size();
            while(sz--){
                Pair top = que.front();
                que.pop_front();
                int dx = (top.x);
                int dy = (top.y);
                mp[dy][dx].insert(top.node->val);
                // cout<<dx<<" "<<dy<<" "<<top.node->val<<endl;
                if(top.node->left) que.push_back(Pair(dx+1,dy-1,top.node->left));
                if(top.node->right) que.push_back(Pair(dx+1,dy+1,top.node->right));
            }
        }
        vector<vector<int>>ans;
        // cout<<mp.size();
        for(auto it:mp){
            vector<int>v;
            for(auto itt:it.second){
                for(int ittt:itt.second){
                    v.push_back(ittt);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};