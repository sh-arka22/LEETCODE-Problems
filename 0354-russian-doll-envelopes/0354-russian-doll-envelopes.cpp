class Solution {
    int search(vector<int>& nums){
       int n = nums.size();
       vector<int>tmp;
       int len = 1;
       tmp.push_back(nums[0]);
       for(int i=1;i<n;i++){
           if(nums[i]>tmp.back()) {
               tmp.push_back(nums[i]);
               len++;
           }
           else{
               int idx = lower_bound(tmp.begin(), tmp.end(), nums[i]) - tmp.begin();
               tmp[idx] = nums[i];
           }
       }
       return len;
   }
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        if(a[0] == b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(begin(envelopes), end(envelopes), cmp);
        int n = envelopes.size();
        vector<int>arr;
        for(auto it:envelopes){
            arr.push_back(it[1]);
        }
        for(auto it:arr) cout<<it<<" ";
        return search(arr);
    }
};
