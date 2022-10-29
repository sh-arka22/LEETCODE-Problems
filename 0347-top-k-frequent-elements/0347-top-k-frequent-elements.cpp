class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
{

    unordered_map<int, int> map;
    for (int ele : nums)
        map[ele]++;

    //{freq,ele}
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

    for (pair<int, int> p : map)
    {
        pq.push({p.second, p.first});
        if (pq.size() > k)
            pq.pop();
    }

    vector<int> ans;
    while (pq.size() != 0)
    {
        vector<int> key = pq.top();
        pq.pop();
        ans.push_back(key[1]);
    }

    return ans;
}

};