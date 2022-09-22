class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int L[n + 1], R[n + 1];
        for(int i = 1; i <= n; i++){
            L[i] = 1, R[i] = 1;
        }
        
        for(int i = 2; i <= n; i++){
            int j = i - L[i];
            while(j > 0 and arr[j - 1] > arr[i - 1]){
                L[i] += L[j];
                j -= L[j];
            }
        }
        for(int i = n - 1; i >= 1; i--){
            int j = i + R[i];
            while(j <= n and arr[j - 1] >= arr[i - 1]){
                R[i] += R[j];
                j += R[j];
            }
        }
        int ans = 0, mod = 1e9 + 7;
        for(int i = 1; i <= n; i++){
            int a = (L[i] * (R[i])) % mod;
            ans = (ans + (a  *1LL* arr[i - 1]) % mod ) % mod;
        }
        return ans;
    }
};