class Solution {
public:
    string serialize(vector<vector<int>>& mat) {
        string s;
        int m = mat.size(), n = mat[0].size();
        for(int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                s = s + to_string(mat[i][j]);
            }
            s = s + "#";
        }
        return s;
    }
    
    bool good(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (mat[i][j]) return false;
            }
        }
        return true;
    }
    
    void addNeighbors(vector<vector<int>>& mat, map<string, bool>& visited, queue<vector<vector<int>>>& myq) {
        int m = mat.size(), n = mat[0].size();
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                auto tmp = mat;
                tmp[i][j] = !tmp[i][j];
                if (i+1 < m) tmp[i+1][j] = !tmp[i+1][j];
                if (i-1 >= 0) tmp[i-1][j] = !tmp[i-1][j];
                if (j+1 < n) tmp[i][j+1] = !tmp[i][j+1];
                if (j-1 >= 0) tmp[i][j-1] = !tmp[i][j-1];
                
                auto s = serialize(tmp);
                if (!visited[s]) {
                    visited[s] = true;
                    myq.push(tmp);
                }
            }
        }
    }
    
    int minFlips(vector<vector<int>>& mat) {
        map<string, bool> visited;
        int level = 0;
        queue<vector<vector<int>>> myq;
        myq.push(mat);
        
        int m = mat.size(), n = mat[0].size();
        while (!myq.empty()) {
            int qs = myq.size();
            for (int i=0; i<qs; i++) {
                auto front = myq.front(); myq.pop();
                if (good(front)) return level;
                addNeighbors(front, visited, myq);
            }
            level++;
        }
        return -1;
    }
};