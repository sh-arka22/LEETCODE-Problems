class Solution {
private:
    long long sumSubarrayMin(vector<int>& arr) {
        long long mod = 1e9+7;
        int n = arr.size();
        long long sum = 0;
        stack<int>st;
        for(int i=0;i<=n;i++){
            while(!st.empty() and (i==n||arr[st.top()]>arr[i])){
                int j = st.top();
                st.pop();
                long long right = i-j;
                int prevTop = -1;
                if(!st.empty()) prevTop = st.top();
                long long left = j-prevTop;
                
                sum += (long long)(arr[j]*left*right);
            }
            st.push(i);
        }
        return sum;
    }
    long long sumSubarrayMax(vector<int>& arr) {
        long long mod = 1e9+7;
        int n = arr.size();
        long long sum = 0;
        stack<int>st;
        for(int i=0;i<=n;i++){
            while(!st.empty() and (i==n||arr[st.top()]<arr[i])){
                int j = st.top();
                st.pop();
                long long right = i-j;
                int prevTop = -1;
                if(!st.empty()) prevTop = st.top();
                long long left = j-prevTop;
                
                sum += (long long)(arr[j]*left*right);
            }
            st.push(i);
        }
        return sum;
    }
public:
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMin(nums);
    }
};