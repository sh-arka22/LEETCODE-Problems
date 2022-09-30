class Solution {
public:
    #define ll long long
    vector<long long> maximumEvenSplit(long long finalSum) {
        if(finalSum&1){
            return {};
        }
 
        vector<ll> ans;
        ll sum = 0,i = 2;
        while(sum+i<=finalSum){
            ans.push_back(i);
            sum+=i;
            i+=2;
        }
 
        if(sum!=finalSum){ //  we can adjust one element over this position
            sum-=ans.back();
            ans.pop_back();
            ans.push_back(finalSum-sum);
        }
 
        return ans;
    }
};