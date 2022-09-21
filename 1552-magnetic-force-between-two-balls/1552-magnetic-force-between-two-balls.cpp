class Solution {
private:
    int bucketCount(vector<int>& position, int dis){
        int n = position.size();
        int cnt = 1, prev = position[0];
        
        for(int i=1;i<n;i++){
            if(position[i] - prev >= dis){
                prev=position[i];
                cnt++;
            }
        }
        return cnt;
    }
public:
    int maxDistance(vector<int>& pos, int m) {
        int l = 1;
        int r = *max_element(begin(pos), end(pos));
        
        sort(begin(pos), end(pos));
        
        int res;
        while(l<=r){
            int mid = (l+r)/2;
            if(bucketCount(pos, mid) >= m){
                l = mid+1;
                res = mid;
            }
            else r = mid - 1;
        }
        return res;
    }
};