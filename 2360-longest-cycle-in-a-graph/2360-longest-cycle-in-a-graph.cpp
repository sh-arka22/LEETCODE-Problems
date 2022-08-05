class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int v = edges.size();
        
        vector<int>indegree(v,0);
        for(int i=0;i<v;i++){
            if(edges[i] != -1)
                indegree[edges[i]]++;
        }
        
        queue<int>que;
        for(int i=0;i<v;i++){
            if(indegree[i] == 0){
                que.push(i);
            }
        }
        
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int v = que.front();
                que.pop();
                if(edges[v] != -1){
                    if(--indegree[edges[v]] == 0)
                        que.push(edges[v]);
                }
            }
        }
        
        int maxLen = -1;
        
        for(int i=0;i<v;i++){
            if(indegree[i] != 0)
                maxLen = max(maxLen, getLen(edges,i,indegree));
        }
        return maxLen;
    }
    
    int getLen(vector<int>& edges, int v, vector<int>&indegree){
        int len = 0;
        
        while(indegree[v] != 0){
            indegree[v] --;
            v = edges[v];
            len++;
        }
        return len;
    }
};