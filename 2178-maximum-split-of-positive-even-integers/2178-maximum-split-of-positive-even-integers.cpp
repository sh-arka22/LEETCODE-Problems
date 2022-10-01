class Solution {
public:
    #define ll long long
    vector<long long> maximumEvenSplit(long long finalSum) {
        ll i = 2;
        ll sum = 0;
        vector<ll>ans;
        if(finalSum&1) return {};
        while(sum<finalSum){
            sum += i;
            ans.push_back(i);
            i+=2;
        }
        if(sum != finalSum){
            int it = find(ans.begin(), ans.end(), sum-finalSum)- ans.begin();
            swap(ans[it], ans[ans.size()-1]);
            ans.pop_back();
        }
        return ans;
    }
};