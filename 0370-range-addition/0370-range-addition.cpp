class Solution {
public:
    vector<int> getModifiedArray(int len, vector<vector<int>>& updates) {
        vector<int>res(len,0);
        for(auto &tuple:updates){
            int sIdx = tuple[0], eIdx = tuple[1], inc = tuple[2];
            res[sIdx] += inc;
            if(eIdx+1<len){
                res[eIdx+1] += -inc;
            }
        }
        partial_sum(res.begin(), res.end(), res.begin());
        return res;
    }
};