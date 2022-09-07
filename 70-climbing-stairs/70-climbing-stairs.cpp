class Solution {
public:
    int fibo(int n){
        if(n <= 1) return 1;

        int f0 = 1;
        int f1 = 2;

        for(int i = 3; i <= n; i++){
            int f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        return f1;
    }
    int climbStairs(int n) {
        return fibo(n);
    }
};