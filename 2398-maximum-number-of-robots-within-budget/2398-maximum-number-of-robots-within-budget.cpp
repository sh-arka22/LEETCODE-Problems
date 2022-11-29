class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int n = size(chargeTimes);
        int l = 0, r = 0;
        using ll = long long;
        ll sum = 0;
        deque<int>dq;
        int maxi = 0;
        while(r<n){
            sum += runningCosts[r];
            while(!dq.empty() and chargeTimes[r]>=chargeTimes[dq.back()])
                dq.pop_back();
            dq.push_back(r);
            ll total = sum*(ll)(r-l+1)+(ll)chargeTimes[dq.front()];
            while(total>budget){
                sum -= runningCosts[l];
                if(!dq.empty() and dq.front()==l)
                    dq.pop_front();
                if(!dq.empty())
                    total = sum*(ll)(r-l+1)+(ll)chargeTimes[dq.front()];
                else total = 0;
                l++;
            }
            maxi = max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};