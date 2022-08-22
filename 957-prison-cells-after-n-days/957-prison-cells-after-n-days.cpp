class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int>cell(8,0);
        vector<vector<int>>seen;
        for(int i=n-1;i>=0;i--){
            for(int i = 1; i <= 6; i++){
                cell[i] = cells[i-1] == cells[i+1];
            }
            if(seen.size() and cell == seen.front()) return (seen[i%seen.size()]);
            else{
                seen.push_back(cell);
            }
            cells = cell;
        }
        return cell;
    }
};