class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        using ll = long long;
        sort(begin(meetings), end(meetings));
        auto cmp = [](array<ll,2>&a, array<ll,2>&b){
            return (a[0]==b[0]? a[1]>b[1] : a[0]>b[0]);
        };
        priority_queue<array<ll,2>, vector<array<ll,2>>, decltype(cmp)>pq(cmp);
        for(int i=0;i<n;i++) pq.push({0,i}); //endTime, idx
        vector<ll>freq(n,0);
        for(auto &meet:meetings){
            while(pq.top()[0]<meet[0]){
                pq.push({meet[0], pq.top()[1]}); //updating the end time
                pq.pop();
            }
            auto [endTime, idx] = pq.top();
            endTime += (meet[1]-meet[0]);
            pq.push({endTime, idx});
            freq[idx]++;
            pq.pop();
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(freq[i]>freq[ans]){
                ans = i;
            }
        }
        return ans;
    }
};