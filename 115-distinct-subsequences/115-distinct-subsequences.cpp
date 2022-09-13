class Solution {
public:
    //SPACE OPTIMISED
    vector<int> curr, prev;
    int recc(string &s, string &t, int N, int M){
        for(int n=0;n<=N;n++){
            for(int m=0;m<=M;m++){
                if(n==0 or m==0){
                    if(m==0){
                        curr[m] = 1;
                        continue;
                    }
                    if(n==0){
                        curr[m] = 0;
                        continue;
                    } 
                }
                int left = 0, right = 0;
                if(s[n-1] == t[m-1]){
                    left = prev[m-1];
                }
                right = prev[m];
                curr[m] = (left+right)%1000000007;
            }
            prev = curr;
        }
        return curr[M];
    }


    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        curr.resize(m+1, 0);
        prev.resize(m+1, 0);
        return recc(s, t, n, m);
    }
};