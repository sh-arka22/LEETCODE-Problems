class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        
        for(auto &rock: asteroids){
            while(st.size() and st.back() > 0 and rock < 0){
                int diff = st.back() + rock;
                if(diff<0) st.pop_back();
                else if(diff>0) rock = 0;
                else{
                    rock = 0;
                    st.pop_back();
                }
            }
            if(rock){
                st.push_back(rock);
            }
        }
        return st;
    }
};