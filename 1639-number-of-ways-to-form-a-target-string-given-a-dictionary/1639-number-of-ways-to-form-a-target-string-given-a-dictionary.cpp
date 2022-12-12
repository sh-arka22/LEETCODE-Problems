class Solution{
private:
    using ll = long long;
    const static int mod = 1e9 + 7;
    vector<vector<int>>dp;
    vector<vector<int>>freq;
    ll recc(vector<string> &words, string &target, int i, int j){
        if (j == size(target))
            return 1;
        if (i == words[0].size())
            return 0;
        if(dp[i][j] != -1)return dp[i][j];
        ll pick = 0;
        // for (int k = 0; k < size(words); k++){
        //     if (words[k][i] != target[j])
        //         continue;
        //     pick += recc(words, target, i + 1, j + 1);
        // }
        pick = freq[i][target[j]] * recc(words, target, i + 1, j + 1);
        ll notPick = recc(words, target, i + 1, j);

        return dp[i][j] = (pick % mod + notPick % mod) % mod;
    }

public:
    int numWays(vector<string> &words, string &target){
        dp.resize(words[0].size(), vector<int>(target.size(), -1));
        freq.resize(words[0].size(), vector<int>(128, 0));
        
        for(int idx=0;idx<size(words);idx++){
            for(int j=0;j<size(words[0]);j++){
                freq[j][words[idx][j]]++;
            }
        }
        
        return recc(words, target, 0, 0);
    }
};