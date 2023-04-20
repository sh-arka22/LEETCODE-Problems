//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/



class Solution{
private:
    void rootNodePath(Node* root, int tar, vector<Node*>&path){
        if(!root) return;
        if(root->data == tar){
            path.push_back(root);
            return;
        }
        rootNodePath(root->left, tar, path);
        if(path.size()){
            path.push_back(root);
            return;
        }
        rootNodePath(root->right, tar, path);
        if(path.size()){
            path.push_back(root);
            return;
        }        
    }
    void kDown(Node* root, Node* block, int k, vector<int>&res){
        if(!root or root==block) return;
        if(k==0){
            res.push_back(root->data);
            return;
        }
        kDown(root->left, block, k-1, res);
        kDown(root->right, block, k-1, res);
    }
    vector<int> distanceK(Node* root, int target, int k) {
        vector<Node*>path;
        rootNodePath(root, target, path);
        Node* block = NULL;
        int i = 0;
        vector<int>res;
        for(auto node: path){
            kDown(node, block, k-i, res);
            block = node;
            i++;
        }
        return res;
    }
public:
    int ladoos(Node* root, int home, int k) {
        // Your code goes here
        vector<vector<int>>ans;
        for(int i=0;i<=k;i++){
            ans.push_back(distanceK(root, home, i));
        }
        int tot = 0;
        for(auto v: ans){
            for(int it: v){
                tot += it;
            }
        }
        return tot;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int home,k;
        cin>> home >> k;
        getchar();
        Solution obj;
        cout<< obj.ladoos(root,home,k) << endl;
    }
	return 0;
}


// } Driver Code Ends