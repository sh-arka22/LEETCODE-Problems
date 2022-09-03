class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        int n = length;
        vector<int>res(n,0);
        
        for(auto update:updates){
            int st = update[0], en = update[1], inc = update[2];
            
            res[st] += inc;
            if(en<n-1){
                res[en+1] -= inc;
            }
        }
        
        int sum = 0;
        for(auto &it:res){
            sum += it;
            it = sum;
        }
        return res;
    }
};