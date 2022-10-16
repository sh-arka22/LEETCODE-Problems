class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        priority_queue<long long, vector<long long>, greater<long long>>currentSet;
        vector<int>nums(n,-1);
        currentSet.push(1);
        int cnt = 0;
        while(cnt < n) {
            long long currentUglyNumber = currentSet.top();
            currentSet.pop();
            nums[cnt++] = currentUglyNumber;
            for(auto it:primes) {
                currentSet.push(currentUglyNumber*it);
            }
            while(currentSet.size() and currentSet.top() == currentUglyNumber) currentSet.pop();
        }
        return nums[n-1];
    }
};