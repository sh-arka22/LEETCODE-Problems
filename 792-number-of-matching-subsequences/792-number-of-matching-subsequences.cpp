class Solution {
private:
    int search(vector<int>&arr, int tar){
        int l = 0, r = arr.size()-1;
        int ans = -1;
        while(l<=r){
            int mid = (l + r)/2;
            if(arr[mid]<=tar)
                l = mid+1;
            else{
                ans = mid;
                r = mid-1;
            }
        }
        return ans == -1 ? ans : arr[ans];
    }
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char, vector<int>>mp;
        int idx = 0;
        for(char c:s){
            mp[c].push_back(idx++);
        }
        int cnt = 0;
        for(string sub:words){
            int prev = -1;
            int idx;
            for(int j=0;j<size(sub);j++){
                idx = search(mp[sub[j]],prev);
                if(idx == -1){
                    break;
                }
                else{
                    prev = idx;
                }
            }
            if(idx != -1) cnt++;
        }
        return cnt;
    }
};