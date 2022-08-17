/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

//****************************  DFS *****************************************
class Solution {
private:
    Node* prev = NULL; //pointer
    void builder(Node* root){
        if(root == NULL) return;
        builder(root->left);
        prev->right = root;
        root->left = prev;
        prev = root;
        builder(root->right);
    }
public:
    Node* treeToDoublyList(Node* root) {
        if(!root) return root;
        Node* dummy = new Node(-1);
        prev = dummy;
        builder(root);
        Node *head = dummy->right;
        dummy->right = head->left = NULL;
        
        head->left = prev;
        prev->right = head;
        
        return head;
    }
};