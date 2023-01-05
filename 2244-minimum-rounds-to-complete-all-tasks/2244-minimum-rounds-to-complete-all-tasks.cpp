class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        for(int it:tasks) mp[it]++;

        int round = 0;

        for(auto [key, val]:mp){
            if(val == 1) return -1;
            if(val%3 == 0){
                round += (val/3);
            }
            else if(val%3 == 1){
                round += ((val/3)+1);
            }
            else if(val%3 == 2){
                round += ((val/3)+1);
            }
        }
        return round;
    }
};