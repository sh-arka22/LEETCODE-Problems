class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        int num1 = tops[0], num2 = bottoms[0];
        for(int i=0;i<tops.size();i++){
            //cnt-1 no of swaps to make all the elemnts of top array as num1
            if(cnt1 != INT_MAX){
                if(tops[i] == num1){} // nothing to do
                else if(bottoms[i] == num1) cnt1++;
                else cnt1 = INT_MAX;
            }
            
            //cnt2 no of swaps to make all the elemts of the bottom array as num1
            if(cnt2 != INT_MAX){
                if(bottoms[i] == num1){}
                else if(tops[i] == num1) cnt2++;
                else cnt2 = INT_MAX;
            }
            
            //cnt3 no of swaps to make all the elemts of the top array as num2
            if(cnt3 != INT_MAX){
                if(tops[i] == num2){}
                else if(bottoms[i] == num2) cnt3++;
                else cnt3 = INT_MAX;
            }
            
            //cnt4 no of swaps to make all the elents of the bottom arrays as num2
            if(cnt4 != INT_MAX){
                if(bottoms[i] == num2){}
                else if(tops[i] == num2) cnt4++;
                else cnt4 = INT_MAX;
            }
        }
        
        int mini = min(min(cnt1,cnt2),min(cnt3,cnt4));
        
        return mini == INT_MAX ? -1 : mini;
    }
};