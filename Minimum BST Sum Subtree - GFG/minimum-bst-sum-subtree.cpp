//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *buildTree(string s) {
        if (s.length() == 0 || s[0] == 'N') return NULL;

        // Create the root of the tree
        vector<string> str;
        istringstream iss(s);
        for (string s; iss >> s;) str.push_back(s);
        Node *root = new Node(stoi(str[0]));

        // Push the root to the queue
        queue<Node*> q;
        q.push(root);

        // Starting from the second element
        int i = 1;
        while (q.size() > 0 && i < str.size()) {

            // Get and remove the front of the queue
            Node *currNode = q.front();
            q.pop();

            // Get the current node's value from the string
            string currVal = str[i];

            // If the left child is not null
            if (currVal != "N") {

                // Create the left child for the current node
                currNode->left = new Node(stoi(currVal));
                // Push it to the queue
                q.push(currNode->left);
            }

            // For the right child
            i++;
            if (i >= str.size()) break;

            currVal = str[i];

            // If the right child is not null
            if (currVal != "N") {

                // Create the right child for the current node
                currNode->right = new Node(stoi(currVal));

                // Push it to the queue
                q.push(currNode->right);
            }
            i++;
        }

        return root;
    }

    void inorder(Node *root) {
        if (root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
int f(Node *root, int &minlen, int &sum, int target, bool &flag, int &maxi, int &mini) {
    if (root == NULL)
        return 0;

    // below subtrees sum,isbst,maxi,mini
    int leftsum = 0, rightsum = 0;
    bool leftflag = true, rightflag = true;
    int leftmaxi = -1e9, rightmaxi = -1e9;
    int leftmini = 1e9, rightmini = 1e9;

    int leftlen = f(root->left, minlen, leftsum, target, leftflag, leftmaxi, leftmini);
    int rightlen = f(root->right, minlen, rightsum, target, rightflag, rightmaxi, rightmini);

    sum = root->data + leftsum + rightsum;
    int currLen = leftlen + rightlen + 1;
    maxi = max(root->data, max(leftmaxi, rightmaxi));
    mini = min(root->data, min(leftmini, rightmini));
    flag = false;
    if (root->data > leftmaxi && root->data < rightmini && leftflag && rightflag) {
        flag = true; // current tree is also bst
    }
    if (currLen < minlen && sum == target && flag) {
        sum = 0;
        minlen = currLen;
    }
    return currLen;
}
int minSubtreeSumBST(int target, Node *root) {
    int sum = 0, minlen = 1e9, maxi = -1e9, mini = 1e9;
    bool flag = true;
    f(root, minlen, sum, target, flag, maxi, mini);
    return minlen == 1e9 ? -1 : minlen;
}
};

//{ Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int target;
        cin>>target;
        string str;
        getline(cin,str);
        getline(cin,str);
        Node node(0);
        Node *root = node.buildTree(str);
        Solution ob;
        int res = ob.minSubtreeSumBST(target, root);
        cout<<res<<endl;
    }
    return 0;
}
// } Driver Code Ends