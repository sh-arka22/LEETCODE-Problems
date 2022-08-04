/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Pair{
public:
    Node *Old, *New;
    Pair(Node* Old, Node* New){
        this->Old = Old;
        this->New = New;
    }
};
class Solution {
public:
    Node* cloneTree(Node* root) {
        if(root == NULL)
            return NULL;
        queue<Pair>que;
        Node *copy = NULL;
        que.push(Pair(root,copy));
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto top = que.front(); que.pop();
                Node *node = new Node(top.Old->val);
                if(copy == NULL){
                    copy = node;
                }
                else if(top.New){
                    top.New->children.push_back(node);
                }
                for(auto child: top.Old->children){
                    que.push(Pair(child,node));
                }
            }
        }
        return copy;
    }
};