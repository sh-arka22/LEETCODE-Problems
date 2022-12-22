class Solution {
public:
    vector<vector<int>> dir={{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
    int slidingPuzzle(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        
        int z = 0;
        string curr = "";
        for(int i=0;i<n*m;i++){
            int r = i/m, c = i%m;
            if(!board[r][c]) z = i;
            curr += (board[r][c] + '0');
        }
        unordered_map<string, int>vis;
        queue<pair<int,string>>que;
        
        que.push({z,curr});
        vis[curr]++;
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto [idx, str] = que.front();
                que.pop();
                if(str == "123450") return rad;
                string tmp;
                for(auto it:dir[idx]){
                    tmp = str;
                    swap(tmp[it],tmp[idx]);
                    if(vis[tmp]==0){
                        vis[tmp]++;
                        que.push({it,tmp});
                    }
                }
            }
            rad++;
        }
        return -1;
    }
};