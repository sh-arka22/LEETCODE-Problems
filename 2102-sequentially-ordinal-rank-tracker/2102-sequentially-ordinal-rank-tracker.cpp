class SORTracker  {
public:
    using iter = set<pair<int, string>>::iterator;
    set<pair<int, string>> s;
    iter it = end(s);    
    void add(string name, int score) {
        auto it1 = s.insert({-score, name}).first;//returns pair whre first points to position and second is bool
        //logic of converting score to -score is to get the best city in front
        //if (it == end(s) || *it1 < *it)
        if (it == end(s) || comp(it1, it))
        {
            --it;
        }
    }
    string get() {
        return (it++)->second;
    }
    bool comp(iter &a, iter &b) {
        if(a->first < b->first) {
            return true;
        }
        else if(a->first == b->first && a->second < b->second) {
            return true;
        }
        return false;
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */