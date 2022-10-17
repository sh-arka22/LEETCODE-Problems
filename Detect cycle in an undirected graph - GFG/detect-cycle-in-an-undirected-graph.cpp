//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
bool found(int V, vector<int> adj[], int n){
    vector<int>vis(n,0);
    deque<int> que;

    que.push_back(V);
    

    while(que.size()){
        int sz = que.size();
        while(sz--){
            int parr = que.front();
            que.pop_front();
            if(vis[parr] == 1) return true;

            vis[parr] = 1;
            for(int child:adj[parr]){
                if(vis[child] == 1) continue;
                que.push_back(child);
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    bool flag = false;
    for(int v = 0;v<V;v++){
        flag = flag or found(v, adj, V);
    }
    return flag;
}
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends