class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(char c:s) freq[c-'a']++;
        vector<int>v;
        for(int x:freq){
            if(x) v.push_back(x);
        }
        sort(begin(v), end(v));
        int n = size(v);
        int count = 0;
        int maxFreq = v[n-1];
        for(int i=n-1;i>=0;i--){
            if(v[i]>maxFreq){
                count += (v[i]-maxFreq);
                v[i] = maxFreq;
            }
            maxFreq = max(0, v[i]-1);
        }
        return count;
    }
};
/*
4 4 4 3 2
3 3 3 3 2
3 2 1 0 0
5 3 3
3 2 1
*/
