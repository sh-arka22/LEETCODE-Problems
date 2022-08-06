/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
private:
    int getLen(Node* p){
        int ans = 0;
        for(;p->parent;p=p->parent,ans++);
        return ans;
    }
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        int len_p = getLen(p), len_q = getLen(q);
        if(len_p > len_q){
            int diff = len_p - len_q;
            while(diff --){
                p = p->parent;
            }
        }
        else{
            int diff = len_q - len_p;
            while(diff--){
                q = q->parent;
            }
        }
        
        for(;p != q; p=p->parent, q=q->parent);
        
        return p;
    }
};