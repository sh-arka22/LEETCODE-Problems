#define pb push_back
class Solution {
    vector<int> v;
public:
    Solution(vector<int>& w) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        v.pb(w[0]);
        for(int i=1;i<w.size();++i)
            v.pb(v.back()+w[i]);    //Cumulative SUM
    }
    
    int pickIndex() {
        int rand_weight = rand()%(v.back());
        return upper_bound(v.begin(),v.end(),rand_weight)-v.begin();
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */