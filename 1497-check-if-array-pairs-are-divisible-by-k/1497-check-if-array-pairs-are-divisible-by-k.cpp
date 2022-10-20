class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>map;

        for(int val:arr){
            int res = (k + val%k)%k;
            map[res]++;
        }

        for(int val:arr){
            int rem = (k + val%k)%k;
            if(rem==0){
                int freq = map[rem];
                if(freq&1) return false;
            }
            else{
                int freq = map[rem];
                int otherFreq = map[k-rem];
                if (freq != otherFreq)
                    return false;
            }
        }
        return true;
    }
};