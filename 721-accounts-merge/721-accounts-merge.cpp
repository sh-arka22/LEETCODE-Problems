class Solution {
public:
    int *parr;
    unordered_map<string,int>emailId;
    unordered_map<string,string>emailName;
    int findParr(int v){
        return parr[v] == v ? v : (parr[v] = findParr(parr[v]));
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        parr = new int[1001];
        int n = accounts.size();
        for(int i=0;i<n;i++) parr[i] = i;
        
        for(int i=0;i<n;i++){
            string name = accounts[i][0];
            for(int j=1;j<accounts[i].size();j++){
                if(emailId.count(accounts[i][j]) == 0){
                    emailId[accounts[i][j]] = i;
                }
                else{
                    int p1 = i;
                    int p2 = findParr(emailId[accounts[i][j]]);
                    parr[p2] = p1;
                }
            }
        }
        
        unordered_map<int,vector<string>>idEmail;
        for(auto &[email,id]:emailId){
            int par = findParr(id);
            idEmail[par].push_back(email);
        }
        
        vector<vector<string>>ans;
        for(auto [id,emails]:idEmail){
            // vector<string> email = it.second;
            sort(emails.begin(),emails.end());
            emails.insert(emails.begin(), accounts[id][0]);
            ans.push_back(emails);
        }
        return ans;
    }
};