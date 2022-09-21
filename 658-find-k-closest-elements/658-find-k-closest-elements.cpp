class Solution {
private:
    int lowerBound(vector<int>& arr, int x){
        int l = 0, r = arr.size()-1;
        int idx = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid] == x) return mid;
            else if(arr[mid]<x){
                idx = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        return idx;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int n = arr.size();
        int idx = lowerBound(arr, x);
        cout<<idx;
        int i = idx, j = idx+1;
        
        vector<int>ansL, ansR;
        while(i>=0 and j<n and k--){
            if(abs(x-arr[i]) > abs(x-arr[j])){
                ansR.push_back(arr[j++]);
            }
            else ansL.push_back(arr[i--]);
        }
        while(k-->0){
            if(i>=0) ansL.push_back(arr[i--]);
            if(j<n) ansR.push_back(arr[j++]);
        }
        reverse(ansL.begin(), ansL.end());
        // reverse(ansR.begin(), ansR.end());
        
        vector<int>ans;
        for(auto it:ansL) ans.push_back(it);
        for(auto it:ansR) ans.push_back(it);
        
        return ans;
    }
};