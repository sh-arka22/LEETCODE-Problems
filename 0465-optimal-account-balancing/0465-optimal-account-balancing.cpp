class Solution {
private:
    vector<int> builDepthArray(vector<vector<int>>&transactions){
        unordered_map<int,int>deptMap;
        for(auto transaction: transactions){
            int giver = transaction[0];
            int taker = transaction[1];
            int amount = transaction[2];
            deptMap[giver] -= amount;
            deptMap[taker] += amount;
        }
        vector<int>dept(deptMap.size());
        int i = 0;
        for(auto &[key, val]: deptMap){
            dept[i++] = val;
        }
        return dept;
    }
    int getMinTransfarsAfter(int currIdx, vector<int>dept){
        while(currIdx < dept.size() and dept[currIdx] == 0) currIdx++;
        if(currIdx >= dept.size()) return 0;
        int minimumTrasaction = 1e9;
        for(int i = currIdx+1; i<dept.size(); i++){
            if(dept[i] * dept[currIdx] < 0){
                dept[i] += dept[currIdx];
                minimumTrasaction = min(minimumTrasaction, getMinTransfarsAfter(currIdx+1, dept) + 1);
                dept[i] -= dept[currIdx];
            }
        }
        return minimumTrasaction;
    }
public:
    int minTransfers(vector<vector<int>>& transactions) {
        vector<int>dept = builDepthArray(transactions);
        return getMinTransfarsAfter(0, dept);
    }
};