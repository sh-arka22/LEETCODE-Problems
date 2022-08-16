/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        queue<NestedInteger>que;
        
        for(auto nested:nestedList){
            que.push(nested);
        }
        
        int maxi = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto top = que.front();
                que.pop();
                if(top.isInteger()) continue;
                for(NestedInteger nested : top.getList()){
                        que.push(nested);
                }
            }
            maxi++;
        }
        cout<<maxi;
        for(auto nested:nestedList){
            que.push(nested);
        }
        int rad = 1, ans = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                NestedInteger top = que.front(); que.pop();
                if(top.isInteger()){
                    ans += (top.getInteger() * ((maxi-rad)+1));
                }
                else{
                    for(NestedInteger nested : top.getList()){
                        que.push(nested);
                    }
                }
            }
            rad++;
        }
        return ans;
    }
};