/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) {
            return NULL;
        }
        unordered_map<Node*, Node*> hash;
        vector<Node*> que;
        que.push_back(node);

        Node* clone_node = new Node(node->val);
        hash[node] = clone_node;

        while (que.size()) {
            vector<Node*>tmp;
            for(auto curr_node: que){
                for(auto child: curr_node->neighbors){
                    if(hash.count(child)==0){
                        Node* newChild = new Node(child->val);
                        hash[child] = newChild;
                        tmp.push_back(child);
                    }
                    hash[curr_node]->neighbors.push_back(hash[child]);
                }
            }
            swap(que, tmp);
        }

        return hash[node];
    }
};