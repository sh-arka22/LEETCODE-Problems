class Solution {
public:
    int calculate(string s) {
        vector<pair<int,int>>stack;
        long int runSum = 0;
        int prevSign = 1;

        for(int i=0;i<size(s);i++){
            char ch = s[i];
            if(ch>='0' and ch<='9'){
                long int num = 0;
                while(i<size(s) and s[i]>='0' and s[i]<='9'){
                    num = (num*10) + (s[i] - '0');
                    i++;
                }
                i--;
                runSum += (num * prevSign);
                prevSign = 1;
            }
            else if(ch == '('){
                stack.push_back({runSum, prevSign});
                runSum = 0;
                prevSign = 1;
            }
            else if(ch == ')'){
                auto [preSum, sign] = stack.back();
                stack.pop_back();
                runSum = preSum + (sign * runSum);
            }
            else if(ch == '-'){
                prevSign = -1;
            }
            else if(ch == '+') prevSign = 1;
        }
        return runSum;
    }
};