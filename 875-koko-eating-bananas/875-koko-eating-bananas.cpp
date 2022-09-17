class Solution {
public:
    long hours(vector<int>& piles,int x){
        long total = 0;
        for(auto it:piles){
            if(it%x){
                total += (it/x);
                total+=1;
            }
            else total = total + ((it/x));
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = *max_element(begin(piles), end(piles));
        int l = 1;
        if(piles.size()==h) return r;
        int speed;
        int m = (r+l)/2;
        while(l<=r){
            m = (l+r)/2;
            if(hours(piles, m) <= h){
                speed = m;
                r = m-1;
            }
            else l = m+1; //increase speed
        }
        return speed;
    }
};