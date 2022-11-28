class Solution {
public:
    vector<long long> minimumCosts(vector<int>& regular, vector<int>& express, int expressCost) {
        using ll = long long;
        int n = size(regular);
        vector<ll>expdp(n+1);
        vector<ll>regdp(n+1);

        expdp[0] = expressCost;
        regdp[0] = 0;
        vector<ll>ans;
        for(int i=1;i<=n;i++){
            expdp[i] = min(expdp[i-1]+express[i-1], regdp[i-1]+expressCost+express[i-1]);
            regdp[i] = min(regdp[i-1]+regular[i-1], expdp[i-1]+regular[i-1]);

            ans.push_back(min(expdp[i], regdp[i]));
        }
        return ans;
    }
};
