class Solution {
public:
    string alphabetBoardPath(string target) {
        int i = 0, j = 0;
        string ans = "";
        
        for(char ch: target){
            int r = (ch-'a')/5, c = (ch-'a')%5;
            while(c !=j or r != i){
                if(c>=j){
                    if(r>i){
                        ans += 'D';
                        i++;
                    }
                    else if(r<i){
                        ans += 'U';
                        i--;
                    }
                    else {
                        ans += 'R';
                        j++;
                        }
                    }
                else{
                    ans += 'L';
                    j--;
                }
            }
            ans += '!';
        }
        return ans;
    }
};