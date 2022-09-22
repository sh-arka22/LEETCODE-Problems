class StockSpanner {
public:
    deque<pair<int,int>>st;
    int time = 0;
    StockSpanner() {
        st.push_back({1e7, 0});
        time = 0;
    }
    
    int next(int price) {
        time ++;
        while(price>=st.back().first) st.pop_back();
        
        int x = time - st.back().second;
        st.push_back({price, time});
        return x;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */