class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i] > 0 || ans.empty() || ans.back() < 0)
                ans.push_back(asteroids[i]);
            else if(ans.back() <= abs(asteroids[i])){
                if(ans.back() < abs(asteroids[i]))
                    i--;
                ans.pop_back();
            }
        }
        return ans;
    }
};