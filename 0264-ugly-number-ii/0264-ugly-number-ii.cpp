class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> currentSet, totalCnt;
        currentSet.insert(1);

        while(totalCnt.size() != n) {
            long long currentUglyNumber = *currentSet.begin();
            currentSet.erase(currentSet.begin());
            totalCnt.insert(currentUglyNumber);
            currentSet.insert(currentUglyNumber*2);
            currentSet.insert(currentUglyNumber*3);
            currentSet.insert(currentUglyNumber*5);
        }
        return *totalCnt.rbegin();
    }
};