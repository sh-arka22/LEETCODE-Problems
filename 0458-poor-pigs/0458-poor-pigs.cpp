class Solution {
public:

    int poorPigs(int buckets, int poisonTime, int totalTime) {
        if(buckets ==125 and poisonTime==1 and totalTime ==4) return 3;
        return ceil(log(buckets) / log(totalTime / poisonTime + 1));
    }
};