class HitCounter {
public:
    deque<int>que;
    HitCounter() {
        que.clear();
    }
    
    void hit(int timestamp) {
        que.push_back(timestamp);
    }
    
    int getHits(int timestamp) {
        int l = max(0, timestamp-300+1);
        int r = timestamp;
        while(que.size() and que.front()<l) que.pop_front();
        return que.size();
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */