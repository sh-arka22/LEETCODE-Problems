class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int cnt = 0;
        while(s.size()){
            int i = s.find(s.back());
            if(i==s.size()-1){
                cnt += (s.size()>>1);
            }
            else{
                cnt += i;
                s.erase(i,1);
            }
            s.pop_back();
        }
        return cnt;
    }
};