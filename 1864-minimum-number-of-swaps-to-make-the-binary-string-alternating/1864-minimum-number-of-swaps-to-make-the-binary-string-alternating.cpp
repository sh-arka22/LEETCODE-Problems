class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        
        int cnt0 = count(begin(s),end(s),'0');
        int cnt1 = n-cnt0;
        cout<<cnt0<<" "<<cnt1;
        
        if(abs(cnt0 - cnt1) > 1) return -1;
        
        int miss0 = 0, miss1 = 0;
        if(cnt1>cnt0){
            for(int i = 0; i<n; i+=2){
                char ch = s[i];
                miss1 += (ch != '1');
            }
            return miss1;
        }
        if(cnt1<cnt0){
            for(int i = 0; i<n; i+=2){
                char ch = s[i];
                miss0 += (ch != '0');
            }
            return miss0;
        }
        
        if(cnt1 == cnt0){
            for(int i = 0; i<n; i+=2){
                char ch = s[i];
                miss0 += (ch != '0');
                miss1 += (ch != '1');
            }
            return min(miss1,miss0);
        }
        
        return -1;
    }
};