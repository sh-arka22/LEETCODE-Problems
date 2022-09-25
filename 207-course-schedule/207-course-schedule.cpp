class Solution
{
public:
    bool dfs(vector<int> &vis, vector<int> &pathVis, vector<int> adj[], int v)
    {
        vis[v] = 1;
        pathVis[v] = 1;

        for (int child : adj[v])
        {
            if (!vis[child] and dfs(vis, pathVis, adj, child))
                return true;
            else if (pathVis[child])
                return true;
        }
        pathVis[v] = 0;
        return false;
    }

    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i] and dfs(vis, pathVis, adj, i) == true)
                return true;
        }
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        int v = numCourses;
        int V = v;
        int indeg[v];
        fill(indeg, indeg + v, 0);
        vector<int> graph[v];
        for (vector<int> edge : prerequisites)
        {
            indeg[edge[0]]++;
            graph[edge[1]].push_back(edge[0]);
        }

        bool flag = isCyclic(V, graph);
        return !flag;
    }
};