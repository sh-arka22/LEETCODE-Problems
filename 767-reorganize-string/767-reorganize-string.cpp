class Solution {
public:
    
    string reorganizeString(string s) {
        int vis[26];
        fill(vis, vis+26, 0);
        char mostFreq;
        int mostCnt = 0;
        for(char c:s){
            vis[c-'a']++;
            if(vis[c-'a']>mostCnt){
                mostFreq = c;
                mostCnt = vis[c-'a'];
            }
        }
        // cout<<mostCnt;
        if(s.size()%2){
            if(2*mostCnt-1 >s.size()) return "";
        }
        else {
            if(2*mostCnt > s.size()) return "";
        }
        
        int i = 0, n = s.size();
        
        while(vis[mostFreq-'a']){
            s[i] = mostFreq;
            i+=2;
            vis[mostFreq-'a']--;
        }
        cout<<i;
        for(int j=0;j<26;j++){
            while(vis[j]){
                if(i >= s.size()) i = 1;
                s[i] = char(j+'a');
                i+=2;
                vis[j]--;
            }
        }
        return s;
    }
};