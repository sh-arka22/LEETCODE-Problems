//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void recc(string s, vector<string>&res, string &curr){
	        if(curr.size() == s.size()){
	            res.push_back(curr);
	            return;
	        }
	        for(int i=0; i<s.size(); i++){
	            char ch = s[i];
	            if(ch == '#') continue;
	            s[i] = '#';
	            curr += ch;
	            recc(s, res, curr);
	            s[i] = ch;
	            curr.pop_back();
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>res;
		    string curr = "";
		    recc(S, res, curr);
		  //  sort(res.begin(), res.end());
		  set<string>st;
		  for(auto s: res) st.insert(s);
		  res.clear();
		  for(auto it: st){
		      res.push_back(it);
		  }
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends