class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int croak[5] = {};
        int cnt = 0;
        int ans = 0;
        for(char c: croakOfFrogs){
            if(c == 'c'){
                croak[0]++;
                cnt++;
            }
            if(c == 'r'){
                croak[1]++;
                if(croak[1]>croak[0]) return -1;
            }
            if(c == 'o'){
                croak[2]++;
                if(croak[2]>croak[1]) return -1;
            }
            if(c == 'a'){
                croak[3]++;
                if(croak[3]>croak[2]) return -1;
            }
            if(c == 'k'){
                croak[4]++;
                if(croak[4]>croak[3]) return -1;
                cnt--;
            }
            ans = max(ans, cnt);
        }
        if(cnt!=0) return -1;
        return ans;
    }
};