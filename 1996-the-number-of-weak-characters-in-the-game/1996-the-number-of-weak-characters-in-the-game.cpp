class Solution {
public:
    bool static cmp(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& pro) {
        int n = size(pro);
        sort(begin(pro), end(pro), cmp);
        int maxDef = -(int)1e9;
        int cnt = 0;
        for(int i=n-1;i>=0;i--){
            if(pro[i][1]<maxDef) cnt++;
            if(pro[i][1]>maxDef){
                maxDef = pro[i][1];
            }
        }
        return cnt;
    }
};