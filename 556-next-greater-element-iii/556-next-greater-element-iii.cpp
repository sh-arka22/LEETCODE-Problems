class Solution {
public:
    int nextGreaterElement(int N) {
        string num = to_string(N);
        int n = num.size();
        int i;
        for(i = n-2;i>=0;i--){
            if(num[i]<num[i+1]) break;
        }
        if(i<0) return -1;
        int j;
        for(j = n-1;j>=0;j--){
            if(num[i] < num[j]) {swap(num[i], num[j]); break;}
        }
        reverse(num.begin()+i+1, num.end());
        return (stoll(num) > INT_MAX or stoll(num) <= N ) ? -1 : stoll(num);
    }
};