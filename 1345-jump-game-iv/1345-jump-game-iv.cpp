class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = size(arr);
        if(n<=1) return n-1;
        
        map<int, vector<int>>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }
        
        deque<int>que;
        que.push_back(0);
        int rad = 0;
        
        while(que.size()){
            int sz = que.size();
            while(sz--){
                int curr = que.front();
                que.pop_front();
                if(curr==n-1) return rad;
                //idx-1
                if(curr-1>=0 and mp.count(arr[curr-1])){
                    que.push_back(curr-1);
                }
                
                //idx+1
                if(curr+1<n and mp.count(arr[curr+1])){
                    que.push_back(curr+1);
                }
                
                //map taleportation
                if(mp.count(arr[curr])){
                    for(int k:mp[arr[curr]]){
                        if(k!=curr){
                            que.push_back(k);
                        }
                    }
                }
                mp.erase(arr[curr]);
            }
            rad++;
        }
        return rad;
    }
};