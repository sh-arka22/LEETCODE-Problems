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
    TreeNode* node;
    long long idx;
    Pair(TreeNode* node, long long idx){
        this->node = node;
        this->idx = idx;
    }
};
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        deque<Pair>que;
        que.push_back(Pair(root,0));
        long long res = -1;
        while(que.size()){
            int sz = que.size();
            long long start = que.front().idx;
            long long end = que.back().idx;
            res = max(res, end-start+1);
            while(sz--){
                Pair top = que.front();
                long long i = top.idx;
                que.pop_front();
                if(top.node->left)
                    que.push_back(Pair(top.node->left, 2*(i-start)+1));
                if(top.node->right)
                    que.push_back(Pair(top.node->right, 2*(i-start)+2));
            }
        }
        return res;
    }
};