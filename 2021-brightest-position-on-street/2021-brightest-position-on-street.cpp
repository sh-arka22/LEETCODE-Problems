class Solution {
public:
    int brightestPosition(vector<vector<int>>& lights) {
        vector<pair<int, int>> line;
        for (auto &l : lights) {
            line.push_back({l[0] - l[1], 1});
            line.push_back({l[0] + l[1] + 1, -1});
        }
        int bright = 0, max_bright = 0, res = INT_MIN;
        sort(begin(line), end(line));
        for (auto [pos, light] : line) {
            bright += light;
            if (bright > max_bright) {
                max_bright = bright;
                res = pos;
            }
        }
        return res;
    }
};