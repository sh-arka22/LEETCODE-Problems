class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>>processed;
        for(auto &v:buildings){
            processed.push_back({v[0],-v[2]});
            processed.push_back({v[1], v[2]});
        }
        sort(begin(processed), end(processed));
        
        multiset<int>pq;
        vector<vector<int>>ans;
        
        pq.insert(0);
        int currHeight = 0;
        for(auto [point, height]:processed){
            if(height<0){
                pq.insert(-1*height);
            }
            else{
                pq.erase(pq.find(height));
            }
            int Top = *pq.rbegin();
            if(currHeight!=Top){
                currHeight=Top;
                ans.push_back({point,currHeight});
            }
        }
        return ans;
    }
};