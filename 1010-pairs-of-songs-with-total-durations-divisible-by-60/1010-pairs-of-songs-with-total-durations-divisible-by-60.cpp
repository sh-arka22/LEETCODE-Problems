class Solution {
private:
    int numPairsDivisibleByK(vector<int>& time, int k){
        vector<int>freq(k,0);
        int cnt = 0;
        for(int t:time){
            int rem = t%k;
            if(rem) cnt+=freq[k-rem];
            else if(rem==0) cnt+=freq[rem];
            freq[rem]++;
        }
        return cnt;
    }
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        return numPairsDivisibleByK(time, 60);
    }
};