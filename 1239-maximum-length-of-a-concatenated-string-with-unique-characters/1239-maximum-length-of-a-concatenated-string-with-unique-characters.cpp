class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<bitset<26>>dp = {bitset<26>()};;
        int res = 0;
        for(auto s:arr){
            bitset<26>a;
            for(char c:s){
                a.set(c-'a');
            }
            int n = a.count();
            if(n<size(s)) continue;
            for(int i = 0; i < dp.size(); ++i){
                bitset c = dp[i];
                if((c&a).any()) continue;
                dp.push_back(c|a);
                res = max(res, (int)size(s)+(int)c.count());
            }
        }
        return res;
    }
};