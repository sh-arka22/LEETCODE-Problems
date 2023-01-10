/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    map<Node*, Node*>mp;
    Node *getNode(Node* curr){
        if(!curr) return NULL;
        if(mp.count(curr)){
            return mp[curr];
        }
        else{
            mp[curr] = new Node(curr->val);
            return mp[curr];
        }
    }
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        Node *oldNode = head;
        Node *newNode = new Node(head->val);
        mp[oldNode] = newNode;
        while(oldNode){
            newNode->next = getNode(oldNode->next);
            newNode->random = getNode(oldNode->random);
            oldNode = oldNode->next;
            newNode = newNode->next;
        }
        return mp[head];
    }
};