class Solution {
public:
    void buildGraph(unordered_map<char,unordered_set<char>>&graph, vector<string>& words){
        int n = words.size();
        for(int i=0;i<n-1;i++){
            int len1 = words[i].size();
            int len2 = words[i+1].size();
            string word1 = words[i];
            string word2 = words[i+1];
            int len = min(len1, len2);
            for(int j=0;j<len;j++){
                if(word1[j] != word2[j]){
                    graph[word1[j]].insert(word2[j]);
                    break;  // needed to be added bcs for thsi test case ["ac","ab","zc","zb"] 
                }
            }
        }
    }
    
    void indegreeCalculate(unordered_map<char,unordered_set<char>>&graph,unordered_map<char,int>&indegree){
        for(auto &[parr,childList]:graph){
            for(auto child:childList){
                indegree[child]++;
            }
        }
    }
    
    string alienOrder(vector<string>& words) {
        
        for(int i=0;i<words.size()-1;i++){
        int len1 = words[i].size();
        int len2 = words[i+1].size();
        int len = min(len1,len2);
        if(words[i].substr(0,len) == words[i+1].substr(0,len) and len1 > len)
            return "";
        }
        
        unordered_map<char,int>indegree;
        unordered_map<char,unordered_set<char>>graph;
        
        for(auto word:words){
            for(char ch:word){
                indegree[ch] = 0;
            }
        }
        
        int v = indegree.size();
        
        buildGraph(graph,words);
        indegreeCalculate(graph,indegree);
        
        
        for(auto &[parr,childList]:graph){
            cout<<parr<<"->";
            for(auto child:childList) cout<<child<<" ";
            cout<<endl;
        }
    
        queue<char>que;
        
        for(auto &[alp,cnt]:indegree){
            if(!cnt)
                que.push(alp);
        }
        
        string res = "";
        
        while(que.size()){
            int sz = que.size();
            while(sz--){
                char top = que.front(); que.pop();
                res+=top;
                for(char child: graph[top]){
                    if(--indegree[child] == 0)
                        que.push(child);
                }
            }
        }
        cout<<res;
        return v == res.size() ? res : "";
    }
};