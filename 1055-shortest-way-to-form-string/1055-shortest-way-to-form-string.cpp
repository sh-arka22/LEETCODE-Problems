class Solution {
public:
    int shortestWay(string src, string tar) {
        int n = src.size(), m = tar.size();
        int cnt = 0;
        for(int i=0;i<m;){
            bool matched = false;
            for(int j=0;j<n and i<m;){
                if(src[j] == tar[i]){
                    i++;
                    matched = true;
                }
                j++;
            }
            if(!matched) return -1;
            cnt++;
        }
        return cnt;
    }
};