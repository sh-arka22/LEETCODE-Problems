class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(start<0 or start>=arr.size() or arr[start]<0) return false;
        if(arr[start] ==0) return true;
        
        arr[start] *= -1;
        return canReach(arr,start+arr[start]) or canReach(arr,start-arr[start]);
    }
};