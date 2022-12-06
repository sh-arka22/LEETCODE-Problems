class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        map<string, vector<string>>mp;
        for(string path:paths){
            string parr = "";
            int i=0;
            while(i<size(path) and path[i] != ' '){
                parr += path[i++];
            }
            parr += '/';
            i++; // skip the space
            while(i<size(path)){
                string file = "", data ="";
                while(i<size(path) and path[i] != '('){
                    file += path[i++];
                }
                while(i<size(path) and path[i] != ' '){
                    data += path[i++];
                }
                mp[data].push_back(parr+file);
                i++;//skip the space
            }
        }
        vector<vector<string>>ans;
        for(auto &[key, val]:mp){
            if(val.size()>1){
                ans.push_back(val);
            }
        }
        return ans;
    }
};