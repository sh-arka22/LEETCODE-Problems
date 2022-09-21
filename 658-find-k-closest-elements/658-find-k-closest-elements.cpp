class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        for(auto i:arr){
            pq.push({abs(i-x),i});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()){
            auto it = pq.top();
            ans.push_back(it.second);
            pq.pop();
        }
        // reverse(begin(ans), end(ans));
        sort(begin(ans), end(ans));
        return ans;
    }
};