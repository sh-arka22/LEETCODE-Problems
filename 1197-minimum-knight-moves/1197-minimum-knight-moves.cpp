class Solution {
public:
    const static int N = 301;
    int minKnightMoves(int x, int y) {
        int dir[8][2] = {{2,1}, {2,-1}, {-2,1}, {-2,-1}, {-1,2}, {1,2}, {1,-2}, {-1,-2}};
        deque<array<int,2>>que;
        unordered_set<string>vis;
        que.push_back({0,0});
        x=abs(x);
        y=abs(y);
        int rad = 0;
        while(que.size()){
            int sz = que.size();
            while(sz--){
                auto [xVal,yVal]=que.front();
                que.pop_front();
                if(xVal==x and yVal==y) return rad;
                
                if(xVal<-2 or yVal<-2) continue;
                if(xVal>x+2 or yVal>y+2) continue;
                
                for(auto &[dr, dc]:dir){
                    int nX = xVal+dr;
                    int nY = yVal+dc;
                    if(vis.count(to_string(nX)+ to_string(nY))) continue;
                    que.push_back({nX,nY});
                    vis.insert(to_string(nX)+ to_string(nY));
                }
            }
            rad++;
        }
        return rad;
    }
};