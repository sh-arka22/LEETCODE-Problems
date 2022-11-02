class Solution {
public:
    bool blackBox(vector<int>& v,int limit, int m){
        int cnt = 1;
        int sum = 0;
        for(int it:v){
            if(it>limit) return false;

            if(sum+it>limit){
                cnt++;
                sum = it;
            }
            else{
                sum += it;
            }
        }
        return cnt <= m;
    }

    int splitArray(vector<int>& v, int m) {

        int low = *max_element(v.begin(),v.end());
        int high = 0;
        high = accumulate(v.begin(),v.end(),high);
        int ans = high;
        while(low<=high){
            int mid = (low+high)>>1;
            if(blackBox(v,mid,m)==false){  //MEANS I CANT FORM M SUBARRAYS WITH THE SUM->MID ||  i can also say that there are more than M subarrays wich is <= sum->mid
                low = mid+1;
            }
            else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};