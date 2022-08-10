class Solution {
public:
    int minSwaps(vector<int>& data) {
        int n = data.size();
        int ones = 0;
        for(int o:data){
            ones += (o == 1);
        }
        
        int zeros = 0;
        int mini = n;
        int l = 0, r = 0;
        for(; r<ones; r++){
            if(data[r] == 0)
                zeros ++;
        }
        r--;
        while(r<n){
            mini = min(mini ,zeros);
            if(data[l] == 0) zeros--;
            l++, r++;
            if(r<n and data[r] == 0) zeros++; 
        }
        return mini;
    }
};