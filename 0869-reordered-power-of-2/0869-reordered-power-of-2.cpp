class Solution {
private:
    vector<int> freqCount(int n){
        vector<int>freq(10,0);
        while(n){
            freq[n%10]++;
            n=n/10;
        }
        return freq;
    }
public:
    bool reorderedPowerOf2(int n) {
        for(int i=0;i<31;i++){
            if(freqCount(n) == freqCount(1<<i)) return 1;
        }
        return 0;
    }
};