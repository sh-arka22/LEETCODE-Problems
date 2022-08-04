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
class Node{
public:
    TreeNode *curr, *parr, *grand;
    Node(TreeNode* curr, TreeNode* parr, TreeNode* grand){
        this->curr = curr;
        this->parr = parr;
        this->grand = grand;
    }
};
class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        queue<Node> que;
        int sum = 0;
        que.push(Node(root, NULL, NULL));
            while(que.size()){
                int sz = que.size();
                while(sz--){
                    Node node = que.front(); que.pop();
                    if(node.grand != NULL and node.grand->val%2==0){
                        sum+=node.curr->val;
                    }
                    if(node.curr->left){
                        que.push(Node(node.curr->left, node.curr, node.parr));
                    }
                    if(node.curr->right){
                        que.push(Node(node.curr->right, node.curr, node.parr));
                    }
                }
            }
        return sum;
        }
    };