class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        map<int,double>mp;
        
        int n = speed.size();
        
        for(int i=0;i<n;i++){
            mp[-pos[i]] = ((double)(target-pos[i]))/speed[i];
        }
        
        int res = 0; double cur = 0;
        for (auto it : mp) if (it.second > cur) cur = it.second, res++;
        
        return res;
    }
};