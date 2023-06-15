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

class Solution {
private: 
    int dfs(Node* root, int &dia){
    if(root->children.size()==0) return 0;
    int maxHeight1 = 0, maxHeight2 = 0;
    for(auto child: root->children){
        int faith = 1 + dfs(child, dia);
        if(faith>maxHeight1){
            maxHeight2 = maxHeight1;
            maxHeight1 = faith;
        }
        else if(faith>maxHeight2){
            maxHeight2 = faith;
        }
    }
    dia = max(dia, maxHeight2+maxHeight1);
    return maxHeight1;
}
public:
    int diameter(Node* root) {
        int dia = 0;
        dfs(root, dia);
        return dia;
    }
};