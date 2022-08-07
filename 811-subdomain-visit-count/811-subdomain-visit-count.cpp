class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>mp;
        
        for(auto cpdomain:cpdomains){
            int cnt = stoi(cpdomain), i = cpdomain.find_first_of(' ');
            string domain = cpdomain.substr(i+1);
            while(true){
                mp[domain] += cnt;
                i = domain.find_first_of('.');
                if(i == string::npos) break;
                domain = domain.substr(i+1);
            }
        }
        vector<string>ans;
        for(auto &[domain,cnt]:mp){
            ans.push_back(to_string(cnt) + " " + domain);
        }
        return ans;
    }
};