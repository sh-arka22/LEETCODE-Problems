class Solution {
public:
    int parr[301];
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    
    bool isSimilar(string &s1, string &s2){
        int count = 0;
        int n = s1.size();
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i] and ++count > 2)
                return false;
        }
        return true;
    }
    int numSimilarGroups(vector<string>& strs) {
        //839 695 1905
        
        int n = strs.size();
        int groups = n; //total no of groups before merging the similar as one
        for(int i=0;i<n;i++){
            parr[i] = i;
        }
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isSimilar(strs[i],strs[j])){
                    int p1 = findParr(i);
                    int p2 = findParr(j);
                    if(p1 != p2){
                        parr[p2] = p1;
                        groups--;
                    }
                }
            }
        }
        return groups;
    }
};