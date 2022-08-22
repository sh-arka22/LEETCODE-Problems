class Solution { // Solution: hashmap + binary search
public:// Time/Space: O(QlongN + N), where Q is the length of queries, N is the length of colors
    vector<int> shortestDistanceColor(vector<int>& colors, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> hashmap;
        for(int i = 0; i < colors.size(); i++) hashmap[colors[i]].push_back(i);
        
        for(auto &[idx,v]: hashmap){
            sort(begin(v), end(v));
        }
        
        vector<int> ans;        
        for(const auto& e: queries){
            int target = e[0], color=e[1];
            if(!hashmap.count(color)) {
                ans.push_back(-1);
            }else{            
                const auto& candidates = hashmap[color];
                auto it1 = lower_bound(candidates.begin(), candidates.end(), target);
                int dist;
                if(it1 == candidates.end()) dist = target - candidates.back();
                else if(it1 != candidates.begin()) dist = min(abs(*prev(it1) - target), abs(*it1 - target) );
                else dist = candidates[0] - target;
                ans.push_back(dist);
            }
        }
        return ans;
    }
};