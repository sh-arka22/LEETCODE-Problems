class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        return 1 + accumulate(begin(damage),end(damage), 0L) - min(*max_element(begin(damage),end(damage)), armor);
    }
};