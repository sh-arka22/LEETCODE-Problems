class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

	int n = graph.size();
	vector<vector<int>> adj(n);
	vector<int> indegree(n, 0);
	int i = 0;
	
	// Reverse Edges of graph
	for(auto& g : graph) {
		for(auto& it : g) {
			adj[it].push_back(i);
			indegree[i]++;
		}
		i++;
	}

	// Topo Sort
	queue<int> q;

	for(int i=0; i<n; i++) {
		if(indegree[i] == 0) q.push(i);
	}

	
        vector<vector<int>>level;
        vector<int>ans;
    while(q.size()){
        int sz = q.size();
        vector<int> safeNodes;
        while(sz--){
            int node = q.front(); q.pop();
            safeNodes.push_back(node);
            ans.push_back(node);
            for(auto& adjnode : adj[node]) {
			    if(--indegree[adjnode] == 0) 
                    q.push(adjnode);
		    }
        }
        level.push_back(safeNodes);
    }
// 	while(q.size()) {
// 		int node = q.front(); q.pop();

// 		safeNodes.push_back(node);

// 		for(auto& adjnode : adj[node]) {
// 			if(--indegree[adjnode] == 0) q.push(adjnode);
// 		}
// 	}
    // reverse(safeNodes.begin(), safeNodes.end());
        for(auto v:level){
            for(auto vv:v){
                cout<<vv<<" ";
            }
            cout<<endl;
        }
	sort(ans.begin(), ans.end());// merge k sorted list

	return ans;
}
};