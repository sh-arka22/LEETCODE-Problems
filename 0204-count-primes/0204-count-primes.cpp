class Solution {
public:
    vector<bool> sieve_of_eratosthenes(int n) {
        vector<bool> primes(n + 1, true);
        primes[0] = primes[1] = false;
        for (int i = 2; i*i <= n; i++) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primes[j] = false;
                }
            }
        }
        return primes;
    }

    int countPrimes(int n) {
        if(n == 0 or n == 1) return 0;
        n--;
        vector<bool> primes = sieve_of_eratosthenes(n);
        int count = 0;
        for (int i = 2; i <= n; i++) {
            if (primes[i]) count++;
        }
        return count;
    }
};