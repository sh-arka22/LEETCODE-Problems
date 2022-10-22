class Solution {
public:
    int numRabbits(vector<int>& ans) {
        unordered_map<int,int> mp;
        int cnt = 0;
        for(auto it:ans){
            mp[it]++;
            if(mp[it] == it+1){
                cnt+=(it+1);
                mp[it] = 0;
            }
        }
        
        for(pair<int,int> it:mp){
            if(it.second != 0) cnt+=(it.first+1);
        }
        
        return cnt;
    }
};

