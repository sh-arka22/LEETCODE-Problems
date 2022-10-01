class DetectSquares {
public:
    int cntPoints[1001][1001] = {};
    vector<pair<int,int>>points;
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        cntPoints[point[0]][point[1]]++;
        points.push_back({point[0],point[1]});
    }
    
    int count(vector<int> point) {
        int px = point[0], py = point[1];
        int cnt = 0;
        for(auto &[x,y]: points){
            if(abs(px-x)==0 or abs(py-y)==0 or abs(px-x) != abs(py-y))
                continue;
            cnt += (cntPoints[px][y] * cntPoints[x][py]);
        }
        return cnt;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */