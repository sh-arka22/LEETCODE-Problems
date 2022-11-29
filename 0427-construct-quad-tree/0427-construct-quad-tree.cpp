/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
private:
    Node* constructor(vector<vector<int>>& grid, int x, int y, int len){
        if(len == 1) return new Node(grid[x][y], true, NULL, NULL, NULL, NULL);
        
        Node* node = new Node();
        Node* topLeft = constructor(grid, x, y, len/2);
        Node* topRight = constructor(grid, x, y+len/2, len/2);
        Node* bottomLeft = constructor(grid, x+len/2, y, len/2);
        Node* bottomRight = constructor(grid, x+len/2, y+len/2, len/2);
        if(topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf && bottomRight->isLeaf
           && topLeft->val == topRight->val && topRight->val == bottomLeft->val && bottomLeft->val == bottomRight->val){
            node->isLeaf = true;
            node->val = topLeft->val;
        }
        else{
            node->topLeft = topLeft;
            node->topRight = topRight;
            node->bottomLeft = bottomLeft;
            node->bottomRight = bottomRight;
        }
        return node;
    }
public:
    Node* construct(vector<vector<int>>& grid) {
        return constructor(grid, 0, 0, grid.size());
    }
};