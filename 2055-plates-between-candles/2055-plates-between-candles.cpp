class Solution {
public:
    const static int N = 1e5;
    int candles[N], left[N], right[N];
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '*') cnt++;
            candles[i] = cnt;
        }
        int idx = -1;
        for(int i=0;i<n;i++){
            if(s[i] == '|') idx = i;
            left[i] = idx;
        }
        
        idx = -1;
        for(int i=n-1;i>=0;i--){
            if(s[i] == '|') idx = i;
            right[i] = idx;
        }
        
        vector<int>ans;
        for(auto input: queries){
            int l_idx = input[0], r_idx = input[1];
            int left_candle = right[l_idx];
            int right_candle = left[r_idx];
            if(left_candle < 0 or right_candle<0){
                ans.push_back(0);
                continue;
            }
            int candle_cnt = candles[right_candle]-candles[left_candle];
            ans.push_back(candle_cnt < 0 ? 0 : candle_cnt);
        }
        
        return ans;
    }
};