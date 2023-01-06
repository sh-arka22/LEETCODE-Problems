class Solution {
private:
    const static int MAXN = 100005;
    int n;
    int a[MAXN], c[MAXN];
    int off = MAXN;
    int ft[MAXN*2];

    int lowbit(int x) {
        return x & (-x);
    }

    void add(int x, int v) {
        x += off;
        while (x < MAXN*2) {
            ft[x] += v;
            x += lowbit(x);
        }
    }

    int sum(int x) {
        x += off;
        int res = 0;
        while (x > 0) {
            res += ft[x];
            x -= lowbit(x);
        }
        return res;
    }
public:
    vector<int> countSmaller(vector<int>& nums) {
        // ft.resize(MAXN, 0);
        n = nums.size();
        for (int i = 1; i <= n; i++) {
            a[i] = nums[i-1];
        }
        for (int i = n; i >= 1; i--) {
            c[i] = sum(a[i]-1);
            add(a[i], 1);
        }
        vector<int>ans;
        for (int i = 1; i <= n; i++) {
            ans.push_back(c[i]);
        }
        return ans;
    }
};