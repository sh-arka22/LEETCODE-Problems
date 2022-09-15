class Solution {
public:
    int search(vector<int>& arr, int tar) {
        int n = arr.size();
        int l = 0, r = n-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid] == tar) return mid;
            if(arr[l]<=arr[mid]){
                if(tar<=arr[mid] and tar>=arr[l]){
                    r = mid-1;
                }
                else l = mid+1;
            }
            else if(arr[mid]<=arr[r]){
                if(tar>=arr[mid] and tar<=arr[r]){
                    l = mid+1;
                }
                else r = mid-1;
            }
        }
        return -1;
    }
};