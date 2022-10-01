class Solution {
public:
    vector<int> amountPainted(vector<vector<int>>& paint) {
        map<int,int>mp;
        int total = 0;
        int cnt = 0;
        vector<int>ans;
        for(auto it:paint){
            int start = it[0], end = it[1];
            while(start < end){
                if(mp.count(start)==0){
                    mp[start] = end;
                    start++;
                    cnt++;
                }
                else{
                    // start = mp[start];
                    
                    int prev_end = mp[start];
                    mp[start] = max(prev_end,end);
                    start = prev_end;   
                }
            }
            ans.push_back(cnt);
            total += cnt;
            cnt = 0; 
        }
        return ans;
    }
};