class Solution {
private:
    int blackBox(vector<int>& weights, int capacity){
        int sum = 0;
        int days = 1;
        for(auto it:weights){
            sum+=it;
            if(sum>capacity){
                days++;
                sum = it;
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(begin(weights), end(weights));
        int r = accumulate(begin(weights), end(weights), 0);
        
        int m = (l+r)/2;
        int wt;
        while(l<=r){
            if(blackBox(weights, m)<=days){
                wt = m;
                r = m-1;
            }
            else{
                l = m + 1;
            }
            m = (l+r)/2;
        }
        return wt;
    }
};