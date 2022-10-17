class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        int maxi = 0;
        
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        maxi = max(sum, maxi);
        int l = k-1, r = n-1;
        
        while(k--){
            sum-=cardPoints[l--];
            sum+=cardPoints[r--];
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};