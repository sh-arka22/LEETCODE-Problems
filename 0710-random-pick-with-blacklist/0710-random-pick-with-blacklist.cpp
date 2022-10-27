class Solution {
public:
    unordered_map<int,int>mp;
    int top;
    Solution(int n, vector<int>& blacklist) {
        top = n-size(blacklist);
        unordered_set<int>st;
        for(auto x:blacklist) st.insert(x);
        
        n--;
        for(int i=0;i<size(blacklist);i++){
            if(blacklist[i]<top){
                while(st.count(n)) n--;
                mp[blacklist[i]]=n;
                n--;
            }
        }
    }
    
    int pick() {
        int ans = rand()%top;
        if(mp.count(ans))
            return mp[ans];
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */