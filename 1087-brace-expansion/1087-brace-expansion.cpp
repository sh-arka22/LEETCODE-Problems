class Solution {
public:
    vector<string> expand(string S) {
  vector<vector<string>> groups(1, vector<string>(1));
  vector<string> res(1);
  for (auto i = 0; i < S.size(); ++i) {
    if (S[i] == '{' || S[i] == '}') groups.push_back(vector<string>(1));
    else if (S[i] == ',') groups.back().push_back("");
    else groups.back().back() += S[i];
  }
  for (auto &group : groups) {
      sort(begin(group), end(group));
      vector<string> res1;
      for (auto &r : res) {
        for (auto &token : group) res1.push_back(r + token);
      }
      swap(res, res1);
  }
  return res;
}
};