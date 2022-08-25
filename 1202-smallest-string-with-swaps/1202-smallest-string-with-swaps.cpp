class dsu{
    public:
    vector<int> p;
    dsu(int n){
        p.resize(n);
        iota(p.begin(),p.end(),0);
    }
    int get(int n){
        if(p[n] == n) return n;
        return p[n] = get(p[n]);
    }
    int unite(int a,int b){
        int p1 = get(a);
        int p2 = get(b);
        if(p1 == p2){
            return false;
        }
        p[p1] = p2;
        return true;
    }
};

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.length();
        dsu D(n);
        for(auto x : pairs){
            D.unite(x[0],x[1]);
        }
        
        vector<vector<int>> child(n);
        for (int i = 0; i < n; i++){
            child[D.get(i)].push_back(i);
        }
        
        for (auto &p : child) {
            string temp = "";
            for (int i : p) temp += s[i];
            sort(temp.begin(), temp.end());
            int k = 0;
            for (int i : p)
                s[i] = temp[k++];
        }
        return s;
    }
};