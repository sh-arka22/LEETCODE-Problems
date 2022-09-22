class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int l = 1;
        int r = n-2;
        int ans = 0;
        int l_max = h[0];
        int r_max = h[n-1];
        while(l<=r){
            l_max = max(l_max, h[l]);
            r_max = max(r_max, h[r]);
            
            if(l_max<=r_max){
                ans += (l_max-h[l++]);
            }
            else ans += (r_max-h[r--]);
        }
        return ans;
    }
};