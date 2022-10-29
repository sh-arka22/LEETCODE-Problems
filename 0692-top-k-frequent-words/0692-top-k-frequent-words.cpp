class myComparator {
public:
    bool operator() (const pair<int,string> &p1, const pair<int,string> &p2) {
    if(p1.first == p2.first) return p1.second < p2.second; //O(lenght of string);
    
    return p1.first > p2.first;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string, int> freq;
        for(string word : words) {
            freq[word]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, myComparator> pq;
        for(auto &[key,val] : freq) {
            pq.push({val, key});
            if(pq.size() > k) {
            pq.pop();
            }
        }
        vector<string>ans(k);
        k--;
        while(pq.size()){
            ans[k--] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};