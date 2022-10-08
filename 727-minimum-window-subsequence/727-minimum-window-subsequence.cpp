class Solution {
public:
    string minWindow(string s1, string s2) {
        string ans = "";
        int n = s1.size(), m = s2.size();
        int mini = n+1;
        int j = 0, end = 0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[j]) j++;
            if(j==m){
                end = i;
                j--;
                while(j>=0){
                    if(s1[i]==s2[j]){
                        j--;
                    }
                    i--;
                }
                i++, j++;
                if(end - i + 1 < mini){
                    mini = end - i + 1;
                    ans = s1.substr(i, end-i+1);
                }
            }
        }
        return ans;
    }
};