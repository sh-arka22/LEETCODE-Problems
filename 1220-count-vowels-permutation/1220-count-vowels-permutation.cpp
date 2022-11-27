class Solution {
public:
    int countVowelPermutation(int n) {
        using ll = long;
        ll a = 1, e = 1, i = 1, o = 1, u = 1;
        ll mod = 1e9+7;
        for(int j=2;j<=n;j++){
            ll a2 = (e + i + u) % mod;;
            ll e2 = (a + i) % mod;
            ll i2 = (e + o) % mod;
            ll o2 = i;            
            ll u2 = (o + i) % mod;
            a = a2, e = e2, i = i2, o = o2, u = u2;
        }
        return (a + e + i + o + u) % mod;
    }
};