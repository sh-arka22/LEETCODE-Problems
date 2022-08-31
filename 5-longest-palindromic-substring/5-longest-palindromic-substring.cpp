class Solution {
private:
    string method01(string &s){
        int n = s.size();
        int len = 0;
        string res;
        for(int i=0;i<n;i++){
            int l,r;
            
            //odd length
            l=i, r=i;
            while(l>=0 and r<n and s[l] == s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    res = s.substr(l,len);
                }
                l--; r++;
            }
            
            
            //even length
            l=i, r=i+1;
            while(l>=0 and r<n and s[l] == s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    res = s.substr(l,len);
                }
                l--; r++;
            }
        }
        return res;
    }
    
    
    string method02(string &s){
        int n = s.size();
        int dp[n][n];
        for(int i=0; i<n; i++) for(int j=0; j<n;j++) dp[i][j] = 0;
        string res = "";
        int maxi = 0;
        for(int gap = 1; gap<=n; gap++){
           for(int i=0 ; i<n; i++) {
                int j = i+gap-1;
               if(j>=n) continue;
                if(s[i]==s[j]){
                    if(gap == 1){
                        dp[i][j] = 1;
                        res = s.substr(i,gap);
                        maxi = 1;
                        continue;
                    }
                    if(gap == 2){
                        dp[i][j] = 2;
                        res = s.substr(i,gap);
                        maxi = 2;
                        continue;
                    }
                    if(dp[i+1][j-1]){
                        dp[i][j] = gap;
                        if(gap>maxi){
                            res = s.substr(i,gap);
                            maxi = gap;
                        }
                    }
                    else{
                        dp[i][j] = 0;
                    }
                }
                else{
                    dp[i][j] = 0;
                }
           }
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++) {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return res;
    }
public:
    string longestPalindrome(string s) {
        return method02(s);
    }
};