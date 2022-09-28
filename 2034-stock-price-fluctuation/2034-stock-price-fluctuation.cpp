class StockPrice {
public:
    map<int,int>mp;
    multiset<int>cnt;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(mp.count(timestamp)){
            auto it = cnt.find(mp[timestamp]);
            cnt.erase(it);
        }
        mp[timestamp] = price;
        cnt.insert(price);
    }
    
    int current() {
        return mp.rbegin()->second;
    }
    
    int maximum() {
        return *cnt.rbegin();
    }
    
    int minimum() {
        return *cnt.begin();
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */