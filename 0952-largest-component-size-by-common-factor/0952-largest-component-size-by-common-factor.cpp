class Solution {
    unordered_map<int,int> rank;
    vector<int> par;
    
    int findPar(int u)
    {
        if(par[u] == u) return u;
        
        return par[u] = findPar(par[u]);
    }
    
    void unn(int u,int v)
    {
        int p1 = findPar(u);
        int p2 = findPar(v);
        if(p1!=p2){
            par[p1] = p2;
            rank[p2]+=rank[p1];
        }
    }
public:
    int largestComponentSize(vector<int>& nums) {
        for(int i=0;i<=100001;i++){
            par.push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            for(int j=2;j<=sqrt(nums[i]);j++)
            {   
                if(nums[i]%j) continue;
                unn(nums[i],nums[i]/j);
                unn(nums[i],j);
            }
        }
        
        int cnt = 0;
        unordered_map<int,int> mp;
        
        for(auto &val : nums)
        {
            int x = findPar(val);
            mp[x]++;
            cnt = max(cnt,mp[x]);
        }
        
        return cnt;
        
    }
};