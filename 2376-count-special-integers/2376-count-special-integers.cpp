class Solution {
public:    
    int countSpecialNumbers(int n) {
        vector<int> digits;
        int temp_n = n + 1;
        while(temp_n > 0){
            int digit = temp_n % 10;
            digits.insert(digits.begin(), digit);
            temp_n /= 10;
        }
        const int len = digits.size();
        int result = 0;
        for(int i=1;i<len;++i){
            result += 9 * NumSlotCount(9, i-1);
        }
        unordered_set<int> used;
        for(int i=0;i<len;++i){
            for(int j=(i == 0 ? 1 : 0);j<digits[i];++j){
                if(used.count(j) > 0){
                    continue;
                }
                result += NumSlotCount(9 - i, len - i - 1);
            }
            if(used.count(digits[i]) > 0){
                break;
            }
            used.insert(digits[i]);
        }
        return result;
    }
    
private:
    // num: number of available digits (leading 0 is allowed)
    // slot: number of remaining slots to fill in
    int NumSlotCount(int num, int slot){
        int result = 1;
        while(slot-- > 0){
            result *= num;
            num -= 1;
        }
        return result;
    }
};