class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        using ll = long long;

        ll sum = 0;
        ll dummy = n;
        ll mod = 10;
        while(dummy){
            sum += dummy%10;
            dummy /= 10;
        }
        ll ans = 0;
        while(sum>target){
            while(n%mod==0) mod = mod*10;
            ans = ans + (mod-(n%mod)); // adding to make the last non zero to zero
            n = n + (mod - (n % mod)); // new number to add
            dummy = n;
            sum = 0;
            while(dummy){
                sum += dummy%10;
                dummy /= 10;
            }
        }
        return ans;
    }
};